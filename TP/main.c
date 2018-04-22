#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
    

#define TAM 15      //nomes pessoas e guitarras
#define pathClientes "ficheiros/clientes.txt"
#define pathGuitarras "ficheiros/guitarras.txt"

//#include "header.h"


typedef struct Data {
    int dd;
    int mm;
    int aaaa;
    
} data;

typedef struct Guitarra {
    int id;
    char nome[TAM];
    int precoDia;
    int valor;
    int estado; //0-disponivel/1-alugada/2-danificada//

} guitarra;

typedef struct Aluguer {
    int id; //da guitarra
    int estado; //0-a decorrer/1-entregue/2-entregue com danos//
    data inicio;
    data entrega;
    
} aluguer;

typedef struct Cliente {
    int NIF;
    int NAlugueres;
    char nome[TAM];
    aluguer al; //mem dinamica

} cliente;


int main(int argc, char** argv) {

guitarra stock [2];/*-mudar-*/
cliente registado [2];/*-mudar-*/
cliente banido [2];/*-mudar-*/
    
    
    
    
    
    return (EXIT_SUCCESS);
}

