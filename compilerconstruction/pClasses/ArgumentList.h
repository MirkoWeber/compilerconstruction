/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentList.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 16:15
 */

#ifndef ARGUMENTLIST_H
#define ARGUMENTLIST_H
#include "../TreePart.h"
#include "ArgumentListS.h"

class ArgumentList : public TreePart{
public:
    ArgumentList();
    ArgumentList(const ArgumentList& orig);
    virtual ~ArgumentList();
private:

};

#endif /* ARGUMENTLIST_H */

