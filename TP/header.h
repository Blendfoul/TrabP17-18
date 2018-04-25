#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para o boolean
//#include <ctype.h>
//#include <math.h>
#include <string.h>
//#include <time.h>
    

#define TAM 15      //nomes pessoas e guitarras
#define pathClientes "ficheiros/clientes.txt"
#define pathGuitarras "ficheiros/guitarras.txt"
    

typedef struct Data data;
typedef struct Guitarra guitarra;
typedef struct Aluguer aluguer;
typedef struct Cliente cliente;
typedef struct Node node;

    

void case1();
void case2();
void case3();
bool imprimeMenu();

guitarra* criaVetor(int *tam);


    
    


#endif /* HEADER_H */

