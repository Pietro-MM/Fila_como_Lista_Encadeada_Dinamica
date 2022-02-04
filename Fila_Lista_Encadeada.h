/*
    NOME: PIETRO MINGHINI MORALLES
    RA: 792238
    DISCIPLINA: Algoritmos e Estruturas de Dados 1
    EXERCICIO: F4 – Pilha ou Fila com alocação encadeada e dinâmica.
    DESCRIÇÃO: DECLARAÇÃO DO TAD FILA COM ALOCAÇÃO ENCADEADA E DINÂMICA.
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

