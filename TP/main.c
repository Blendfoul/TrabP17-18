#include "header.h"



int main(int argc, char** argv) {
  
    int tamGuit;
    guitarra* g;
    
    g = criaVetor(&tamGuit);
    
    
    
    imprimeMenu(g, tamGuit);
    
    
    
    
    free(g);
return (EXIT_SUCCESS);
}

