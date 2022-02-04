/*
    NOME: PIETRO MINGHINI MORALLES
    RA: 792238
    DISCIPLINA: Algoritmos e Estruturas de Dados 1
    EXERCICIO: F3 - TAD Fila: implementação, teste e aplicação.
    DESCRIÇÃO: IMPLEMENTAÇÃO DAS FUNÇÕES TAD FILA
*/

#include "Fila_Lista_Encadeada.h"

void Cria(Fila *F){
    F->inicio = NULL;
    F->fim = NULL;
};

bool Vazia(Fila *F){
    if(F->inicio == NULL){
        return true;
    }
    else{
        return false;
    }
};

bool Cheia(Fila *F){
    return false;
};

void Insere(Fila *F, int x, bool *result){
    NodePtr FAux;

    if(Cheia(F) == true){
        *result = false;
    }
    else{
        FAux = (NodePtr) malloc (sizeof (NodePtr));
        FAux->info = x;
        FAux->next = NULL; //O ELEMENTO SEMPRE ENTRA NO FINAL, ENTÃO NÃO HÁ PROXIMO ELEMENTO
        if(Vazia(F)){
            F->inicio = FAux;
        }
        else{
            F->fim->next = FAux;
        }
        F->fim = FAux;
        *result = true;
    }
};

void Retira(Fila *F, int *x, bool *result){
    NodePtr FAux;

    if(Vazia(F)){
        *result = false;
    }
    else{
        *x = F->inicio->info;
        FAux = F->inicio;
        F->inicio = F->inicio->next;
        if(F->inicio == NULL){
            F->fim = NULL;
        }
        free(FAux);
        *result = true;
    }
};

