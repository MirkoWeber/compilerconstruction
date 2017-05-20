/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lexxer.cpp
 * Author: nabz32x
 * 
 * Created on 19. April 2017, 14:56
 */

#include "lexxer.h"
#include "Symbol.h"
#include <fstream>
#include <iostream>
#include <streambuf>
#include "Types.h"
using namespace std;

int lexxer::iSymbol = -1;
vector<Symbol*> lexxer::myTable;


lexxer::lexxer( const string &filePath) {
    type = Types();
    string gans = " ";
    gans.at(0) = '"';
    token.push_back("(");
    token.push_back(")");
    token.push_back(";");
    token.push_back("{");
    token.push_back("}");
    token.push_back(" ");
    token.push_back(".");
    token.push_back("\n");
    token.push_back("=");
    token.push_back("+");
    token.push_back("-");
    token.push_back("/");
    token.push_back("*");
    token.push_back(",");
    token.push_back(gans);
    keyWord.push_back(type.package);
    keyWord.push_back(type.import);
    keyWord.push_back(type.func);
    keyWord.push_back(type.integer);
    keyWord.push_back(type.boolean);
    ifstream fs(filePath.c_str());
    
    if(fs.is_open()){
        sourceFile.assign((std::istreambuf_iterator<char>(fs)),
                 std::istreambuf_iterator<char>());
    }
    iChar = 0; 
    iLine = 0;
    lexChar = 0;
    quotationStart = false;
    iSymbol = -1;
}
lexxer::lexxer() {
    
}


lexxer::lexxer(const lexxer& orig) {
}

lexxer::~lexxer() {
}

void lexxer::lex(){
    iLine = 0;
    string toGet ="";
    char cChar;
    string cCharString;
    Symbol tmp;
    for(int i = 0 ; i< sourceFile.length();i++) {
        iChar = i;
        cChar = sourceFile.at(i);
        cCharString = cChar;
        if (compareWithVector( cCharString, token )) {
            if(cChar == '\n'){
                iLine++;
            }
            if(!quotationStart && cChar == '"' ) {
                quotationStart = true;
                myTable.push_back(new Symbol(cCharString , type.token , iChar , iLine));
            }else
            {
                if(quotationStart && cChar == '"') quotationStart = false; 
            }
            if(!quotationStart){
                myTable.push_back(new Symbol(cCharString , type.token , iChar , iLine));
            }
            
            if(toGet.length() > 0 && quotationStart == false ){ // abschließenden Token gefunden und etwas ist in toGet?
                if(compareWithVector( toGet , keyWord )) {
                    myTable.insert( myTable.end() - 1 , new Symbol(toGet , type.keyword , iChar , iLine) );
                    toGet = "";
                }
                else{   // muss dann wohl identifier oder konstante sein
                    int tableEnd = myTable.size() - 1; 
                    if( tableEnd - 1 >= 0 ){ // hole den Wert vor dem jetzt gelesenen token hier
                        if(myTable.at( ( tableEnd - 1 ) )->getValue().at( 0 ) == '"' && myTable.at( ( tableEnd ) )->getValue().at( 0 ) == '"' ){ 
                            // anführungszeichen umgeben den Wert, dann konstanter string!
                            myTable.insert(myTable.end() - 1,new Symbol( toGet , type.constantString , iChar , iLine ));
                            toGet = "";
                        }
                        else // keine String konstante? Dann entweder konstante oder identifier
                        {
                            if(toGet.at(0) > 47 && toGet.at(0) < 58 ){ // startet mit numerischen Symbol?
                                // muss dann Nummer sein, TODO: später prüfen, dass auch wirklich alles nummern sind, sonst Fehlermeldung und lexxer beenden
                                
                                myTable.insert(myTable.end() - 1,new Symbol( toGet , type.constantNumeric , iChar , iLine ));
                                toGet = ""; 
                            }else{ // startet nicht mit nummer? Dann auf jeden identifier alter!
                                
                                myTable.insert(myTable.end() - 1,new Symbol( toGet , type.identifier , iChar , iLine ));
                                toGet = "";  
                            }

                        }
                    }
                }
            }
            
            if(quotationStart == false) continue;
        }
        toGet += sourceFile.at(i);
    }
    cleanTable();
    print();
}

void lexxer::print(){
        for(int i = 0 ; i < myTable.size() ; i ++){
        myTable.at(i)->print();
    }
}

Symbol* lexxer::next(){ 
    iSymbol++;
    if(iSymbol >= myTable.size() ){
        return NULL;
    }
    return myTable.at(iSymbol);
    
}

Symbol* lexxer::preview(){ 
    int iSym = iSymbol;
    iSym++;
    if(iSym >= myTable.size() ){
        return NULL;
    }
    return myTable.at(iSym);
    
}

void lexxer::cleanTable(){
    char gans = '"';
    string gansS = " ";
    gansS.at(0) = gans;
    for( int i = myTable.size() - 1 ; i >= 0 ; i-- ){
        if(myTable.at(i)->getType().compare(type.token) == 0){
            if(myTable.at(i)->getValue().compare(gansS) == 0){
                removeFromVector(i);
                continue;
            }
            if(myTable.at(i)->getValue().compare(" ") == 0){
                removeFromVector(i);
                continue;
            }
            if(myTable.at(i)->getValue().compare("\n") == 0){
                removeFromVector(i);
                continue;
            }
        }
    }
    for( int i = myTable.size() - 1 ; i >= 0 ; i-- ){
        if( i - 1 >= 0 ){
            if(myTable.at(i - 1)->getType().compare(type.identifier) == 0 && myTable.at(i)->getType().compare(type.keyword) == 0 && 
                        myTable.at(i)->getValue().compare(type.integer) == 0  ) 
            {
                myTable.at(i - 1) = new Symbol(myTable.at(i - 1)->getValue() , type.identifierDeclInt , myTable.at(i - 1)->getIChar() , myTable.at(i - 1)->getLine());
                removeFromVector(i);
            }
            if(myTable.at(i - 1)->getType().compare(type.identifier) == 0 && myTable.at(i)->getType().compare(type.keyword) == 0 && 
                        myTable.at(i)->getValue().compare(type.boolean) == 0 ) {
                myTable.at(i - 1) = new Symbol(myTable.at(i - 1)->getValue() , type.identifierDeclBool , myTable.at(i - 1)->getIChar() , myTable.at(i - 1)->getLine());
                removeFromVector(i);               
            }
            
        }
    }
    
}

void lexxer::removeFromVector(int it){
    for(int i = it ; i < myTable.size(); i++){
        if( i < myTable.size() - 1){
            myTable.at(i) = myTable.at(i+1);
        }else myTable.pop_back();
    }
}

bool lexxer::compareWithVector(const string &compare ,const vector<string> &check ){
    for(int i = 0 ; i < check.size() ; i++){
        if( compare.compare(check.at(i))==0) { 
            return true;
        }
    }
    return false;
}

