/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionBlock.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 16:10
 */

#ifndef FUNCTIONBLOCK_H
#define FUNCTIONBLOCK_H
#include "../TreePart.h"
#include "ArgumentList.h"
#include "Statement.h"

class FunctionBlock : public TreePart{
public:
    FunctionBlock();
    FunctionBlock(const FunctionBlock& orig);
    virtual ~FunctionBlock();
private:

};

#endif /* FUNCTIONBLOCK_H */

