#include "header.h"


guitarra * criaVetor(int * tam){
    guitarra * g = 0;
    char a[5];
    int i = 0;
    FILE *f;
        
    f = fopen(pathGuitarras, "r");
        if(f==NULL){
            printf("Erro no acesso ao ficheiro \n");
        }
    
    
    //while(fgets(a, 5, f) != NULL)
    while(fscanf(f, "%d", g->id) == 1){
        i++;
        
        g = (guitarra) realloc(g, i * sizeof(guitarra));
            if(g==NULL){
                printf("Erro na alocacao de memoria\n");
            }
        
        fscanf(f, "%d", g->id);
        fscanf(f, "%d", g->precoDia);
        fscanf(f, "%d", g->valor);
        fscanf(f, "%d", g->estado);
        fgets(g->nome, 20, f);
    }
    
*tam = i;    
fclose(f);
return g;
}
void listaTodas(guitarra g[], int tam){
    int i;
    for(i = 0; i < tam; i++) {
        printf("/// Nome: %s //", g[i].nome);
        switch(g[i].estado){
                case 0:
                    printf(" Estado: Disponivel");
                    break;
                case 1:
                    printf(" Estado: Alugada");
                    break;
                case 2:
                    printf(" Estado: Danificada");
                    break;
        }
        printf(" // ID: %d // Preco/Dia: %d // Valor: %d ///", 
                g[i].id , g[i].precoDia, g[i].valor);
    }


}



void case1(guitarra *g, int tamGuit){
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
                listaTodas(g, tamGuit);
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
void case2(guitarra *g, int tamGuit){
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
void case3(guitarra *g, int tamGuit){
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

bool imprimeMenu(guitarra *g, int tamGuit){
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
                case1(g, tamGuit);
                break;
            case 2:
                printf("----------2-----------\n");
                case2(g, tamGuit);
                break;
            case 3:
                printf("----------3-----------\n");
                case3(g, tamGuit);
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




