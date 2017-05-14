/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListS.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 16:26
 */

#ifndef ARGUMENTLISTS_H
#define ARGUMENTLISTS_H
#include "../TreePart.h"
#include "ArgumentList.h"

class ArgumentListS : public TreePart {
public:
    ArgumentListS();
    ArgumentListS(const ArgumentListS& orig);
    virtual ~ArgumentListS();
private:

};

#endif /* ARGUMENTLISTS_H */

