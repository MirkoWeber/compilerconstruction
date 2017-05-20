/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionType.cpp
 * Author: Nabztastic
 * 
 * Created on 15. Mai 2017, 22:00
 */

#include "FunctionType.h"

FunctionType::FunctionType() : TreePart() {
    typeName = "FT  ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    
}

FunctionType::FunctionType(const FunctionType& orig) {
}

FunctionType::~FunctionType() {
}

