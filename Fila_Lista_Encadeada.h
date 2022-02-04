/*
    NOME: PIETRO MINGHINI MORALLES
    RA: 792238
    DISCIPLINA: Algoritmos e Estruturas de Dados 1
    EXERCICIO: F3 - TAD Fila: implementação, teste e aplicação.
    DESCRIÇÃO: DECLARAÇÃO DO TAD FILA
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node *next;
};

typedef struct Node *NodePtr;

typedef struct {
    NodePtr inicio;
    NodePtr fim;
} Fila;

void Cria(Fila *F);

bool Vazia(Fila *F);

bool Cheia(Fila *F);

void Insere(Fila *F, int x, bool *result);

void Retira(Fila *F, int *x, bool *result);

