#include <stdio.h>
#include "lexxer.h"
#include "Symbol.h"
#include "parser.h"
using namespace std;



int main(int argc, const char* argv[]){
    string loadFile = "helloWorld.go"; 
    lexxer* myLexxer = new lexxer(loadFile);
    myLexxer->lex();
    parser* myParser = new parser( );
    
    delete myLexxer;
        
}

/*
 * 
 */
