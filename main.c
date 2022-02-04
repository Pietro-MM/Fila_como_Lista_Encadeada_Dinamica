/*
    NOME: PIETRO MINGHINI MORALLES
    RA: 792238
    DISCIPLINA: Algoritmos e Estruturas de Dados 1
    EXERCICIO: F3 - TAD Fila: implementação, teste e aplicação.
    DESCRIÇÃO: ATIVIDADE PARA IMPLEMENTAR E TESTAR O TAD FILA SEM REALOCAÇÃO DOS ELEMENTOS
*/
#include "Fila_Lista_Encadeada.h"


void imprimirPrimeiro(Fila *f);
void imprimeFila(Fila *f);

int main() {
    int op = 10, valor;
    bool resultado;
    Fila fila1;
    Cria(&fila1);

    while (op != 0){
        printf("(1) Cheia -- (2) Vazia -- (3) Insere -- (4) Remove -- (5) Imprime Primeiro -- (6) Imprime Fila: ");
        scanf("%d", &op);

        if(op == 1){
            if(Cheia(&fila1)){
                printf("Fila cheia\n");
            }
            else{
                printf("N cheia\n");
            }
        }
        else if(op == 2){
            if(Vazia(&fila1)){
                printf("Fila vazia\n");
            }
            else{
                printf("N vazia\n");
            }
        }
        else if(op == 3){
            scanf("%d", &valor);
            Insere(&fila1, valor, &resultado);
            if(resultado){
                printf("Inserido %d\n", valor);
            }
            else{
                printf("Fila cheia\n");
            }
        }
        else if(op == 4){
            Retira(&fila1, &valor, &resultado);
            if(resultado){
                printf("Retirou %d\n", valor);
            }
            else{
                printf("Fila vazia\n");
            }
        }
        else if(op == 5){
            imprimirPrimeiro(&fila1);
        }
        else if(op == 6){
            imprimeFila(&fila1);
        }
    }
    return 0;
}

void imprimirPrimeiro(Fila *f){
    //A portabiliade entre códigos funcionaria aqui, porém não é necessário tudo que foi realizado no outro código,
    //Uma vez que tenho acesso ao primeiro elemento facilmente.
    if(Vazia(f)){
        printf("Fila vazia.\n");
    }
    else
        printf("Primeiro elemento: %d\n", f->inicio->info);
};

void imprimeFila(Fila *f){
    Fila aux;
    Cria(&aux);
    int x;
    bool resultado;

    if(Vazia(f)){
        printf("Fila vazia\n");
    }
    else{
        while (!Vazia(f)){
            Retira(f, &x, &resultado);
            Insere(&aux, x, &resultado);
        }
        printf("Inicio -----> ");
        while (!Vazia(&aux)){
            Retira(&aux, &x, &resultado);
            printf("%d ", x);
            Insere(f, x, &resultado);
        }
        printf("\n");
    }
}

