#include "header.h"

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
    struct Aluguer * prox;
} aluguer;

typedef struct Cliente {
    int NIF;
    int NAlugueres;
    char nome[TAM];
    aluguer al; //mem dinamica

} cliente;


typedef struct Node {
    struct Cliente atual;
    struct node * prox;     //no=no->prox;
} node;
