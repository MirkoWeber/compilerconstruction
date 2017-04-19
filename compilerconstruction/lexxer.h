/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lexxer.h
 * Author: nabz32x
 *
 * Created on 19. April 2017, 14:56
 */

#ifndef LEXXER_H
#define LEXXER_H

#include <iostream>
#include <String>
#include <vector>
#include "Symbol.h"


class lexxer {
public:
    lexxer();
    lexxer(const lexxer& orig);
    virtual ~lexxer();
    nextToken();
    
private:
    bool stringStart;
    int iChar;
    void lex();
    void tryMatch(std::string&);
    std::string sourceFile;
    std::vector<std::string> keyWord;
    std::vector<std::string> token;
    std::vector<Symbol> myTable;
    bool compareWithVector(const std::string& , std::vector<std::string>& );
    
};

#endif /* LEXXER_H */

