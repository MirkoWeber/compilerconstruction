#include "Start.h"

Start::Start() : TreePart(){
    typeName = "Start";
    Types types;
    lexxer myLex = lexxer(); 
    symbol = myLex.next();
    
    if(symbol->getType() == types.keyword && symbol->getValue() == types.package ){
        son.push_back(new PackageClause());
    }
    else {
       cout << "ERR: No package clause found";
       exit(123); // package name is mandatory
    }
    symbol = myLex.next();
    if(symbol->getType() == types.keyword && symbol->getValue() == types.import ){
        son.push_back(new ImportDeclaration());
    }
    symbol = myLex.next();
    if(symbol->getType() == types.keyword && symbol->getValue() == types.func ){
        son.push_back(new FunctionDeclaration());
    }
}