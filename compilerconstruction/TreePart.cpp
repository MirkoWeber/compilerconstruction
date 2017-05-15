/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "TreePart.h"


TreePart::TreePart(){
    visited = false;
    brothers = 0;
}

Symbol* TreePart::getSymbol(){
    return symbol;
}

vector<TreePart*>* TreePart::getSon(){
    
    return &son;
}

void TreePart::print(){
    cout << typeName;
}

TreePart::TreePart(Symbol* get){
    symbol = get;
    
}


