/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionDeclaration.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 15:43
 */

#ifndef FUNCTIONDECLARATION_H
#define FUNCTIONDECLARATION_H
#include "../TreePart.h"
#include "FunctionBlock.h"

class FunctionDeclaration : public TreePart{
public:
    FunctionDeclaration();
    FunctionDeclaration(const FunctionDeclaration& orig);
    virtual ~FunctionDeclaration();
private:

};

#endif /* FUNCTIONDECLARATION_H */

