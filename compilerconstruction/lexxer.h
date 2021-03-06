#ifndef LEXXER_H
#define LEXXER_H

#include <iostream>
#include <String>
#include <vector>
#include "Symbol.h"
#include "Types.h"

class lexxer {
public:
    lexxer();
    lexxer(const std::string& );
    lexxer(const lexxer& orig);
    virtual ~lexxer();
    void lex();
    void print();
    Symbol* next();
    Symbol* preview();
private:
    static int iSymbol;
    static std::vector<Symbol*> myTable;
    bool stringStart;
    int iChar;
    int iLine;
    int lexChar;
    bool quotationStart;
    std::string sourceFile;
    std::vector<std::string> keyWord;
    std::vector<std::string> token;
    
    bool compareWithVector(const std::string& , const std::vector<std::string>& );
    void cleanTable();
    
    Types type;
    void removeFromVector(int);
};

#endif /* LEXXER_H */

