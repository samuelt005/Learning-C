#include "../global.h"

//Criação da lista com o início apontando para null
LISTA *criaLista() {
    LISTA *inicio = (LISTA *) malloc(sizeof(LISTA)); // Aloca cabeça da lista
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na alocação...\n");
        exit(0);
    }
    return inicio;
}