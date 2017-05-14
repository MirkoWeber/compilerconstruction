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
    static string token;
    static string constantString;
    static string keyword;
    static string constantNumeric;
    static string identifier;
    static string package;
    static string import;
    static string func;
    static string identifierDeclInt;
    static string identifierDeclBool;
    static string integer;
    static string boolean;
private:

};

#endif /* TYPES_H */

