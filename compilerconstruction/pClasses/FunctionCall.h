/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionCall.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 17:54
 */

#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H
#include "../TreePart.h"
#include "ArgumentListDecl.h"

class FunctionCall : public TreePart{
public:
    FunctionCall();
    FunctionCall(const FunctionCall& orig);
    virtual ~FunctionCall();
private:

};

#endif /* FUNCTIONCALL_H */

