/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArgumentListDeclS.h
 * Author: Nabztastic
 *
 * Created on 14. Mai 2017, 18:07
 */

#ifndef ARGUMENTLISTDECLS_H
#define ARGUMENTLISTDECLS_H

#include "../TreePart.h"
#include "ArgumentListDecl.h"


class ArgumentListDeclS : public TreePart {
public:
    ArgumentListDeclS();
    ArgumentListDeclS(const ArgumentListDeclS& orig);
    virtual ~ArgumentListDeclS();
private:

};

#endif /* ARGUMENTLISTDECLS_H */

