
#include "parser.h"
#include "pClasses/Start.h"
#include <cstdlib>

parser::parser(){
    
    root = new Start();
    root->ebene = 0;
    root->sonPosition = 0;
    depth = getDepth(root,0);
    

    printTree(root);
    cout << "depth of tree:" << depth;
    
    
}

int parser::getDepth(TreePart* start, int ebene ){
    vector<int> iGet;
    if(start->getSon()->size()> 0){
        ebene++;
        for(int i = 0 ; i < start->getSon()->size(); i++){
            start->getSon()->at(i)->sonPosition = start->sonPosition + i;
            start->getSon()->at(i)->brothers = start->getSon()->size();
            iGet.push_back( getDepth(start->getSon()->at(i) , ebene ) ) ;
            start->getSon()->at(i)->ebene = ebene;
           
            
        }
        for(int i = 0 ; i < iGet.size() ; i++){
            if( iGet.at(i) > ebene ) ebene = iGet.at(i);
        }
    }
    return ebene; 
}

TreePart* parser::getLeafEbene(TreePart* start , int ebene ){
    TreePart* nextLeaf;
      if(start->getSon()->size()> 0){ 
          for(int i = 0 ; i < start->getSon()->size() ; i++){
              nextLeaf = start->getSon()->at(i);
              if(nextLeaf->ebene == ebene && nextLeaf->visited == false ){
                  nextLeaf->visited = true;
                  return start->getSon()->at(i);
              }
              else if( start->getSon()->at(i)->ebene < ebene ) {
                  nextLeaf = getLeafEbene( start->getSon()->at(i) , ebene );
                  if( nextLeaf != NULL ){
                      return nextLeaf;
                  }
              }
              
          }
      }
    return NULL;
    
    
}

void parser::printTree(TreePart* start){
    TreePart* myLeaf;
    myLeaf = start;
    int counter = 0;
    int counterOld = 0;
    myLeaf->print();
    int oPosition = 0;
    for(int i = 0 ; i < depth ; i++){
        
        if( counterOld < counter ) counterOld = counter ;
        counter = 0;
        
        
        do{
            if( myLeaf != NULL) oPosition = myLeaf->sonPosition;
            
            myLeaf = getLeafEbene(root , i);
            if( myLeaf != NULL ){
                if(counter == 0){
                    for(int s = 0; s < myLeaf->sonPosition ; s++){
                        cout << "---- ";
                    }
                }else
                    for(int s = 0; s< myLeaf->sonPosition - ( oPosition + 1 ) ; s++ ){
                        cout << "---- ";
                    } 
                
                
                myLeaf->print();
                cout << " ";  
                counter++;
            }

        }while( myLeaf != NULL );
        cout << "\n";
    }
    
    
}

