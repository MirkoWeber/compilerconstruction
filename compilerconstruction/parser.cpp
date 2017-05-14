
#include "parser.h"
#include "pClasses/Start.h"

parser::parser(){
    
    root = new Start();
    printTree(root);
    
}

void parser::printTree(TreePart* start){
    cout << start->getSymbol()->getType() << " " << start->getSymbol()->getValue() << "\n";
    vector<TreePart*>* son;
    son = start->getSon();
    if( son->size() > 0 ){
        for( int i = 0 ; i < son->size() ; i++){
            printTree(son->at(i));
        }
    }
    
}