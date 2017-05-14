/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionDeclaration.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 15:43
 */

#include "FunctionDeclaration.h"
#include "../TreePart.h"

FunctionDeclaration::FunctionDeclaration() : TreePart() {
    typeName = "FunctionDeclaration";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    if(symbol->getType() == types.identifier){
        son.push_back(new FunctionBlock());
    } else {
        int line = symbol->getLine();
        std::cout << "ERR: identifier after func expected" << line;
        exit(123);
    }
}

FunctionDeclaration::FunctionDeclaration(const FunctionDeclaration& orig) {
}

FunctionDeclaration::~FunctionDeclaration() {
}

