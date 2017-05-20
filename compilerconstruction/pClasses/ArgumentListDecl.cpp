/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListDecl.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 18:06
 */

#include "ArgumentListDecl.h"

ArgumentListDecl::ArgumentListDecl() : TreePart() {
    typeName = "AG  ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    if(symbol->getType() == types.identifier || symbol->getType() == types.constantNumeric || symbol ->getType() == types.constantString ){
        son.push_back(new ArgumentListDeclS());
    }
    else{
        if(symbol->getType() == types.token && symbol->getValue() == ")"){

        }
        else{
            if(symbol->getType() == types.identifierDeclBool || symbol->getType() == types.identifierDeclInt){
                cout << "ERR: Identifier Declaration as function call argument at Line: " << symbol->getLine();
            }else
            cout << "ERR: Closing ) after argumentlist expected at Line: " << symbol->getLine();
            exit(123);
        }
    }
}

ArgumentListDecl::ArgumentListDecl(const ArgumentListDecl& orig) {
}

ArgumentListDecl::~ArgumentListDecl() {
}

