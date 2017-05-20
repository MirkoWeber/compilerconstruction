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
    typeName = "ST  ";
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
        
        
    } else if(symbol->getType() == types.identifierDeclBool || symbol->getType() == types.identifierDeclInt){
        symbolTmp = myLexer.preview();
    }
    if(myLexer.preview()->getValue() != "}" ) {
        son.push_back(new Statement());  
    }else{
        myLexer.next();
    }
}

Statement::Statement(const Statement& orig) {
}

Statement::~Statement() {
}

