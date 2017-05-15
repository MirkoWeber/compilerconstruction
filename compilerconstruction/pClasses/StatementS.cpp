/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StatementS.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 17:44
 */

#include "StatementS.h"
#include "Statement.h"

StatementS::StatementS() : TreePart() {
    typeName = "StatementS";
    Symbol* symbolTmp;
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    son.push_back(new Statement());

        
}

StatementS::StatementS(const StatementS& orig) {
}

StatementS::~StatementS() {
}

