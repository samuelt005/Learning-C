//Arquivo Header com todas as bibliotecas utilizadas globalmente
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

//Início da biblioteca GLOBAL.H
#ifndef GLOBAL_H
#define GLOBAL_H

// Definindo a estrutura da lista
struct Node { // Criando o tipo do elemento da lsita
    int num; // Dado
    struct Node *prox;
    struct Node *ant;
};

typedef struct Node node; // Apelidando a lista para facilitar
typedef node *LISTA; // Declarando ponteiro do início da lista

void opcaoRetorno () {
    int returnTrigger;

    printf("Insira algo para voltar\n");
    scanf("%d", &returnTrigger);

    if (returnTrigger) {
        printf("Voltando...\n");
        sleep(2);
        return;
    }
}

#include "funcoes/criaLista.c" // FEITO
#include "funcoes/exibeLista.c" // FEITO
#include "funcoes/insereFinal.c" // FEITO
#include "funcoes/insereInicio.c" // FEITO
#include "funcoes/insereMeio.c" // FEITO
#include "funcoes/liberaLista.c" // FEITO
#include "funcoes/ordenaLista.c" // FEITO
#include "funcoes/removeFinal.c" // FEITO
#include "funcoes/removeInicio.c" // FEITO
#include "funcoes/removeMeio.c" // TODO REFATORAR
#endif
//Fim da biblioteca GLOBAL.H