#include "Start.h"


Start::Start(vector<Symbol*>* table){
    Types types;

    if(table->at(0)->getType() == types.keyword){
        if(table->at(0)->getValue() == "Package"){
            PackageClause packageClause = PackageClause(*table->at(0));
        }
    }
}