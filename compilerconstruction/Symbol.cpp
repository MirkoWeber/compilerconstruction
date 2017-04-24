/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SymbolTable.cpp
 * Author: nabz32x
 * 
 * Created on 19. April 2017, 15:27
 */

#include "Symbol.h"
#include <iostream>
Symbol::Symbol(std::string valueG , std::string typeG , int iChar , int line) {
    value = valueG;
    this->line = line;
    this->iChar = iChar;
    type = typeG;
}

void Symbol::print(){
    std::cout <<"value: " <<value << " " << "type: " << type << " " << "at line:" << line << std::endl; 
}

std::string Symbol::getValue(){
    return value;
}

std::string Symbol::getType(){
    return type;
}

int Symbol::getIChar(){
    return iChar;
}



Symbol::Symbol() {
}

Symbol::Symbol(const Symbol& orig) {
}

Symbol::~Symbol() {
}

