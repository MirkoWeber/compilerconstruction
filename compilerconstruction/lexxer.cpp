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

using namespace std;

lexxer::lexxer() {
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
    token.push_back(gans);
    keyWord.push_back("package");
    keyWord.push_back("import");
    keyWord.push_back("func");
    stringStart = false;
    ifstream fs("helloworld.go");
    if(fs.is_open()){
        sourceFile.assign((std::istreambuf_iterator<char>(fs)),
                 std::istreambuf_iterator<char>());
    }
    cout << sourceFile;
}

lexxer::lexxer(const lexxer& orig) {
}

lexxer::~lexxer() {
}

lexxer::nextToken(){
    
    
    
}

void lexxer::lex(){
    string toGet ="";
    bool quotationStart = false;
    char cChar;
    string cCharString;
    Symbol tmp;
    for(int i = 0 ; i< sourceFile.length();i++) {
        iChar = i;
        cChar = sourceFile.at(i);
        cCharString = cChar;
        
        if (compareWithVector( cCharString, token )) {
            if(!quotationStart && cChar == '"' ) {
                quotationStart = true;
                myTable.push_back(new Symbol(cCharString , "token" , iChar , 0));
            }else
            {
                if(quotationStart && cChar == '"') quotationStart = false; 
            }
            if(!quotationStart){
                myTable.push_back(new Symbol(cCharString , "token" , iChar , 0));
            }
            
            if(toGet.length() > 0 && quotationStart == false ){ // abschließenden Token gefunden und etwas ist in toGet?
                if(compareWithVector( toGet , keyWord )) {
                    tmp = Symbol(  );
                    myTable.insert( myTable.end() - 1 , new Symbol(toGet , "keyword" , iChar , 0) );
                    toGet = "";
                }
                else{   // muss dann wohl identifier oder konstante sein
                    int tableEnd = myTable.size() - 1; 
                    if( tableEnd - 1 >= 0 ){ // hole den Wert vor dem jetzt gelesenen token hier
                        if(myTable.at( ( tableEnd - 1 ) )->getValue().at( 0 ) == '"' && myTable.at( ( tableEnd ) )->getValue().at( 0 ) == '"' ){ 
                            // anführungszeichen umgeben den Wert, dann konstanter string!
                            myTable.insert(myTable.end() - 1,new Symbol( toGet , "conststring" , iChar , 0 ));
                            toGet = "";
                        }
                        else // keine String konstante? Dann entweder konstante oder identifier
                        {
                            if(toGet.at(0) > 47 && toGet.at(0) < 58 ){ // startet mit numerischen Symbol?
                                // muss dann Nummer sein, TODO: später prüfen, dass auch wirklich alles nummern sind, sonst Fehlermeldung und lexxer beenden
                                
                                myTable.insert(myTable.end() - 1,new Symbol( toGet , "constnumber" , iChar , 0 ));
                                toGet = ""; 
                            }else{ // startet nicht mit nummer? Dann auf jeden identifier alter!
                                
                                myTable.insert(myTable.end() - 1,new Symbol( toGet , "identifier" , iChar , 0 ));
                                toGet = "";  
                            }

                        }
                    }
                }
            }
            
            continue;
        }
        toGet += sourceFile.at(i);
    }
    cout << myTable.size();
    for(int i = 0 ; i < myTable.size() ; i ++){
        myTable.at(i)->print();
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

