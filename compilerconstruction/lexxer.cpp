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
    lex();
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
    for(int i = 0 ; i< sourceFile.length();i++){
        iChar = i;
        
        if( ( sourceFile.at(i) == ' '  || sourceFile.at(i) == '\n' || sourceFile.at(i) == ';' ) ) {
            if( toGet.compare("") == 0 ) 
            {
                continue;
            }
            else{// has to be identifier or string
                if(stringStart && toGet.at(toGet.size() - 1 ) == '"'){
                    toGet.erase(toGet.size()-1);
                    myTable.push_back(Symbol("string",toGet,iChar,0));
                    toGet = "";
                }else 
                {
                    if(stringStart == false && toGet.at(toGet.size() - 1 ) != '"'  ){
                        myTable.push_back(Symbol("identifier",toGet,iChar,0));
                    }
                }
            }
                
            
        }
        toGet+=sourceFile.at(i);
        tryMatch(toGet);
        
    }
    cout << myTable.size();
    for(int i = 0 ; i < myTable.size() ; i ++){
        myTable.at(i).print();
    }
}

void lexxer::tryMatch(string &compare){ // TODO compare funktion schreiben die vektor übermittelt bekommt
    char gans ='"';
    if(compareWithVector(compare , token)){
        myTable.push_back(Symbol("token",compare,iChar,0));
        if( compare.at(0) == gans  ) stringStart = true; 
        compare="";   
        }
    if(compareWithVector(compare , keyWord)){
        myTable.push_back(Symbol("keyword",compare,iChar,0));
            compare="";
        }
    return;
}

bool lexxer::compareWithVector(const string &compare , vector<string> &check){
    for(int i = 0 ; i < check.size() ; i++){
        if( compare.compare(check.at(i))==0) return true;
    }
    return false;
}

