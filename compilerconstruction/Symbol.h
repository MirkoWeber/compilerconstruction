/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SymbolTable.h
 * Author: nabz32x
 *
 * Created on 19. April 2017, 15:27
 */

#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <vector>
#include <string>

class Symbol {
public:
    
    Symbol();
    Symbol(std::string , std::string , int , int );
    Symbol(const Symbol& orig);
    virtual ~Symbol();
    void print();
private:
    std::string type; 
    std::string value;
    int iChar;
    int line;
};

#endif /* SYMBOLTABLE_H */

