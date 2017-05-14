/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StatementS.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 17:44
 */

#ifndef STATEMENTS_H
#define STATEMENTS_H

#include "../TreePart.h"

class StatementS : public TreePart {
public:
    StatementS();
    StatementS(const StatementS& orig);
    virtual ~StatementS();
private:

};

#endif /* STATEMENTS_H */

