/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListDeclS.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 18:07
 */

#include "ArgumentListDeclS.h"

ArgumentListDeclS::ArgumentListDeclS() : TreePart() {
    typeName = "AG' ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    if(symbol->getType() == types.token && symbol->getValue() == "," ){
        son.push_back(new ArgumentListDecl());
    }else{
        if(symbol->getType() == types.token && symbol->getValue() == ")"){

        }
        else{
            if(symbol->getType() == types.identifierDeclInt || symbol->getType() == types.identifierDeclBool){
                cout << "ERR: Identifier declaration as function call argument at Line: " << symbol->getLine();
            }else if(symbol->getType() == types.identifier || symbol->getType() == types.constantNumeric || symbol->getType() == types.constantString){
                cout << "ERR: Missing ',' at Line: " << symbol->getLine();
            }else
            cout << "ERR: Closing ')' expected at Line: " << symbol->getLine();
            exit(123);
        }
    }
}

ArgumentListDeclS::ArgumentListDeclS(const ArgumentListDeclS& orig) {
}

ArgumentListDeclS::~ArgumentListDeclS() {
}

