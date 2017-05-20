/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListS.cpp
 * Author: Nabztastic
 * 
 * Created on 14. Mai 2017, 16:26
 */

#include "ArgumentListS.h"

ArgumentListS::ArgumentListS() : TreePart() {
    typeName = "AGC'";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    //std::cout << symbol->getType();
    if(symbol->getType() == types.token && symbol->getValue() == "," ){
        son.push_back(new ArgumentList());
    }else{
        if(symbol->getType() == types.token && symbol->getValue() == ")"){

        }
        else{
            if(symbol->getType() == types.identifier){
                cout << "ERR: Identifier as function declaration argument at Line: " << symbol->getLine();;
            }            
            else if(symbol->getType() == types.identifier || symbol->getType() == types.constantNumeric || symbol->getType() == types.constantString){
                cout << "ERR: Missing ',' at Line: " << symbol->getLine();
            }else
            cout << "ERR: Closing ) after argumentlist expected at Line: " << symbol->getLine();;
            exit(123);
        }
    }

}

ArgumentListS::ArgumentListS(const ArgumentListS& orig) {
}

ArgumentListS::~ArgumentListS() {
}

