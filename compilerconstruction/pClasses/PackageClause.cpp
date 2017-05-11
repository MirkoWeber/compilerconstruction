#include "PackageClause.h"

PackageClause::PackageClause(Symbol sym) {
    Types types = Types();
    if(sym.getType() == types.identifier){
        symbol = sym;
    } else {
        printf("ERR: missing identifier at line " + sym.getLine());
        exit(123);
    }

}