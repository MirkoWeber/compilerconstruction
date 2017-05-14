/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListDecl.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 18:06
 */

#ifndef ARGUMENTLISTDECL_H
#define ARGUMENTLISTDECL_H

#include "../TreePart.h"
#include "ArgumentListDeclS.h"
class ArgumentListDecl : public TreePart {
public:
    ArgumentListDecl();
    ArgumentListDecl(const ArgumentListDecl& orig);
    virtual ~ArgumentListDecl();
private:

};

#endif /* ARGUMENTLISTDECL_H */

