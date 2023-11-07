//Arquivo Header com todas as bibliotecas utilizadas globalmente
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

//Início da biblioteca GLOBAL.H
#ifndef GLOBAL_H
#define GLOBAL_H

#define CONTAGEM 10

// Definindo a estrutura da lista
struct No {
    int data;
    struct No *esq, *dir;
};

typedef struct No no;
typedef no *ArvBin;

#include "funcoes/funcoes.h"

#endif
//Fim da biblioteca GLOBAL.H