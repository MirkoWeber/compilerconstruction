#include "Start.h"


Start::Start() : TreePart(){
    Types types;
    lexxer myLex = lexxer(); 
    symbol = myLex.next();
    if(symbol->getType() == types.keyword && symbol->getValue() == "package" ){
            PackageClause packageClause = PackageClause();
    }
    else {
       cout << "ERR: No package clause found";
       exit(123); // package name is mandatory
    }
    symbol = myLex.next();
    if(symbol->getType() == types.keyword && symbol->getValue() == "import"){
            ImportDeclaration importDecl = ImportDeclaration();
    }
    symbol = myLex.next();
}