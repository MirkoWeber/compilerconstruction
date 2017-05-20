/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionCall.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 17:54
 */

#include "FunctionCall.h"



FunctionCall::FunctionCall() : TreePart() {
    typeName = "FC  ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    if(symbol->getType() == types.token && symbol->getValue() == "."){
        symbol = myLexer.next();
        if(symbol->getType() == types.identifier ){
            son.push_back(new FunctionCall());
        }    
        
    }else{
        if(symbol->getType() == types.token && symbol->getValue() == "("){
            son.push_back(new ArgumentListDecl());
        }
    }
}

FunctionCall::FunctionCall(const FunctionCall& orig) {
}

FunctionCall::~FunctionCall() {
}

