/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionBlock.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 16:10
 */

#include "FunctionBlock.h"

FunctionBlock::FunctionBlock() : TreePart() {
    typeName = "FunctionBlock";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    
    if(symbol->getType() == types.token && symbol->getValue() == "("){
        son.push_back(new ArgumentList());
    } else {
        int line = symbol->getLine();
        std::cout << "ERR: '(' after Identifier expected at Line:" << line;
        exit(123);
    }
    symbol = myLexer.next();
    if(symbol->getType() == types.token && symbol->getValue() == "{"){
        son.push_back(new Statement());
    }else {
        int line = symbol->getLine();
        std::cout << "ERR: Function Block starting with '{' expected at Line: " << line;
        exit(123);      
    }
}

FunctionBlock::FunctionBlock(const FunctionBlock& orig) {
}

FunctionBlock::~FunctionBlock() {
}

