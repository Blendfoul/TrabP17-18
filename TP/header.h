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
struct Data {
    int dd;
    int mm;
    int aaaa;
    
};
typedef struct Guitarra guitarra;
struct Guitarra {
    int id;
    char nome[TAM];
    int precoDia;
    int valor;
    int estado; //0-disponivel/1-alugada/2-danificada//

};
typedef struct Aluguer aluguer;
struct Aluguer {
    int id; //da guitarra
    int estado; //0-a decorrer/1-entregue/2-entregue com danos//
    data inicio;
    data entrega;
    struct Aluguer * prox;
};
typedef struct Cliente cliente;
struct Cliente {
    int NIF;
    int NAlugueres;
    char nome[TAM];
    aluguer al; //mem dinamica

};
typedef struct Node node;
struct Node {
    struct Cliente atual;
    struct node * prox;     //no=no->prox;
};


guitarra* criaVetor(int *tam);
void listaTodas(guitarra g[], int tam);




void case1(guitarra *g, int tamGuit);
void case2(guitarra *g, int tamGuit);
void case3(guitarra *g, int tamGuit);
bool imprimeMenu(guitarra *g, int tamGuit);


#endif /* HEADER_H */