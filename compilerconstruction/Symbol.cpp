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
Symbol::Symbol(std::string type , std::string value , int iChar , int line) {
    this->value = value;
    this->line = line;
    this->iChar = iChar;
    this->type = type;
}

void Symbol::print(){
    std::cout <<"value: " <<value << " " << type << " " << std::endl; 
}

Symbol::Symbol() {
}

Symbol::Symbol(const Symbol& orig) {
}

Symbol::~Symbol() {
}

