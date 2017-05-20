/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentList.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 16:15
 */

#include "ArgumentList.h"

ArgumentList::ArgumentList() : TreePart() {
    typeName = "AGC ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    if(symbol->getType() == types.identifierDeclInt || symbol->getType() == types.identifierDeclBool ){
        son.push_back(new ArgumentListS());
    }
    else{
        if(symbol->getType() == types.token && symbol->getValue() == ")"){

        }
        else{
            if(symbol->getType() == types.identifier){
                cout << "ERR: Identifier as function declaration argument";
            }else
            cout << "ERR: Closing ) after argumentlist expected";
            exit(123);
        }
    }
}

ArgumentList::ArgumentList(const ArgumentList& orig) {
}

ArgumentList::~ArgumentList() {
}

