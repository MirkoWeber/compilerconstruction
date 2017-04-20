/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Types.h
 * Author: nabz32x
 *
 * Created on 20. April 2017, 14:38
 */

#ifndef TYPES_H
#define TYPES_H

#include <string>
using namespace std;

class Types {
public:
    Types();
    Types(const Types& orig);
    virtual ~Types();
    string token;
    string constantString;
    string keyword;
    string constantNumeric;
    string identifier;
private:

};

#endif /* TYPES_H */

