#include <stdio.h>
#include "lexxer.h"
#include "Symbol.h"
using namespace std;


int main(int argc, const char* argv[]){
    printf("\n Hello World \n\n");
    lexxer* myLexxer = new lexxer();
    myLexxer->lex();
    delete myLexxer;
        
}

/*
 * 
 */
