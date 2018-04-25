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


void case1(){
 int x;
    do{
    
        x=0;
    
    printf("-------Guitarras-------\n");
    printf("1. Adicionar uma guitarra\n");
    printf("2. Mostrar histórico de alugueres de guitarra\n");
    printf("3. Listar todas\n");
    printf("4. Listar alugadas\n");
    printf("-----------------------\n");
    printf("9. Voltar\n");
    
    scanf(" %d", &x);
    system("cls");
    switch (x){
            case 1:
                printf("--------1-1-----------\n");
                //adicionaGuitarra();
                break;
            case 2:
                printf("--------1-2-----------\n");
                //mostraHistoricoGuitarra();
                break;
            case 3:
                printf("--------1-3-----------\n");
                //listaTodas();
                break;
            case 4:
                printf("--------1-4-----------\n");
                //listaAlugadas();
                break;
            case 9:
                break;    
            default:
                break;
    }       
    
    system("cls");
    
    }while(x != 9);
}
void case2(){
 int x;
    do{
    
        x=0;
    
    printf("-------Clientes-------\n");
    printf("1. Adicionar um cliente\n");
    printf("2. Remover Cliente\n");
    printf("3. Mostrar estado de um cliente\n");
    printf("4. Listar clientes ativos\n");
    printf("5. Listar clientes banidos\n");
    printf("-----------------------\n");
    printf("9. Voltar\n");
    
    scanf(" %d", &x);
    system("cls");
    switch (x){
            case 1:
                printf("--------2-1-----------\n");
                //adicionaAluguer();
                break;
            case 2:
                printf("--------2-2-----------\n");
                //removeCliente();
                break;
            case 3:
                printf("--------2-3-----------\n");
                //mostraEstadoCliente();
                break;
            case 4:
                printf("--------2-4-----------\n");
                //listaClientesAtivos();
                break;
            case 5:
                printf("--------2-5-----------\n");
                //listaClientesBanidos();
                break;
            case 9:
                break;    
            default:
                break;
    }       
    
    system("cls");
    
    }while(x != 9);
}
void case3(){
 int x;
    do{
    
        x=0;
    
    printf("-------Alugueres-------\n");
    printf("1. Criar um aluguer\n");
    printf("2. Concluir aluguer\n");
    printf("3. Listar Alugueres\n");
    printf("-----------------------\n");
    printf("9. Voltar\n");
    
    scanf(" %d", &x);
    system("cls");
    switch (x){
            case 1:
                printf("--------3-1-----------\n");
                //criaAluguer();
                break;
            case 2:
                printf("--------3-2-----------\n");
                //concluiAluguer();
                break;
            case 3:
                printf("--------3-3-----------\n");
                //listaAlugueres();
                break;
            case 9:
                break;    
            default:
                break;
    }       
    
    system("cls");
    
    }while(x != 9);
}

bool imprimeMenu(){
    int x;
    do{
    
        x=0;
    
    printf("-----LojaGuitarras-----\n");
    printf("1. Guitarras\n");
    printf("2. Clientes\n");
    printf("3. Alugueres\n");
    printf("-----------------------\n");
    printf("9. Sair\n");
    
    scanf(" %d", &x);
    system("cls");
    switch (x){
            case 1:
                printf("----------1-----------\n");
                case1();
                break;
            case 2:
                printf("----------2-----------\n");
                case2();
                break;
            case 3:
                printf("----------3-----------\n");
                case3();
                break;                
            case 9:
                return false;
                break;    
            default:
                break;
    }       
    
    system("cls");
    
    }while(x != 9);
}



guitarra* criaVetor(int *tam){

}



