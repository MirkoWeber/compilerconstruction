/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Statement.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 17:30
 */

#include "Statement.h"

Statement::Statement() : TreePart() {
    Symbol* symbolTmp;
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    if(symbol->getType() == types.identifier  ){
        symbolTmp = myLexer.preview();
        if( symbolTmp->getType() == types.token && symbolTmp->getValue() == "=" ){
            myLexer.next();
            son.push_back(new ArithmeticExpression());
        }else{
            son.push_back(new FunctionCall());
        }
        
    } else {
        
    
    }
}

Statement::Statement(const Statement& orig) {
}

Statement::~Statement() {
}

