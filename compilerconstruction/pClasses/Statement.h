/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Statement.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 17:30
 */

#ifndef STATEMENT_H
#define STATEMENT_H

#include "../TreePart.h"
#include "StatementS.h"
#include "ArithmeticExpression.h"
#include "FunctionCall.h"

class Statement : public TreePart {
public:
    Statement();
    Statement(const Statement& orig);
    virtual ~Statement();
private:

};

#endif /* STATEMENT_H */

