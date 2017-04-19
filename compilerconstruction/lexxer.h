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


class lexxer {
public:
    lexxer();
    lexxer(const lexxer& orig);
    virtual ~lexxer();
    nextToken();
    
private:
    int iCharacter;
    std::String sourceFile;
};

#endif /* LEXXER_H */

