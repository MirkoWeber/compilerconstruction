
#include "parser.h"
#include "pClasses/Start.h"
#include <cstdlib>

parser::parser(){
    
    root = new Start();
    printTree(root);
    
}

int parser::getDepth(TreePart* start, int iM ){
    int iMax = iM;
    if(start->getSon()->size()> 0){
        for(int i = 0 ; i < start->getSon()->size(); i++){
            int iGet = getDepth(start , iMax );
            if( iGet > iMax ) iMax = iGet;
        }
    
        
    }
    return iMax;
    
}

void parser::printTree(TreePart* start){
//    start->print();
//    cout << " " << start->getSymbol()->getValue() << "\n";
//    vector<TreePart*>* son;
//    son = start->getSon();
//    if( son->size() > 0 ){
//        for( int i = 0 ; i < son->size() ; i++){
//            
//            if(son->at(i)!=NULL){
//                son->at(i)->print();
//                cout << " " << son->at(i)->getSymbol()->getValue();
//            }
//        }
//    }
    
    measure the depth of the tree, call that D
    have two queues, called Q1 and Q2
    enque the top node of the tree in Q1
    for (i = D; --i>=0; ){
    foreach node in Q1 {

    on first iteration of this inner loop, print 2^i - 1 spaces,
    else print 2^(i+1) - 1 spaces.

    if node == null print blank
    else print node.value

    if node.left exists enque node.left in Q2
    else enque null in Q2

    if node.right exists enque node.right in Q2
    else enque null in Q2
    }
    copy Q2 to Q1
    clear Q2
    print end-of-line
    
}

