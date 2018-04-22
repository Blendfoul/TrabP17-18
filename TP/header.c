#include "header.h"

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
    int Nalugueres;
    char nome[TAM];
    aluguer al; //mem dinamica

} cliente;

typedef struct Data {
    int dd;
    int mm;
    int aaaa;
    
} data;


