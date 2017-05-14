/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArithmeticExpression.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 17:50
 */

#ifndef ARITHMETICEXPRESSION_H
#define ARITHMETICEXPRESSION_H

#include "../TreePart.h"

class ArithmeticExpression : public TreePart {
public:
    ArithmeticExpression();
    ArithmeticExpression(const ArithmeticExpression& orig);
    virtual ~ArithmeticExpression();
private:

};

#endif /* ARITHMETICEXPRESSION_H */

