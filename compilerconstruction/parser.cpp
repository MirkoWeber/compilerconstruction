
#include "parser.h"
#include "pClasses/Start.h"

parser::parser(){
    
    root = new Start();
    printTree(root);
    
}

void parser::printTree(TreePart* start){
    cout << "Type is: ";
    start->print();
    cout << "\n";
    cout << start->getSymbol()->getType() << " " << start->getSymbol()->getValue() << "\n";
    vector<TreePart*>* son;
    son = start->getSon();
    if( son->size() > 0 ){
        for( int i = 0 ; i < son->size() ; i++){
            cout << i << " son of me\n";
            printTree(son->at(i));
        }
    }
    
}