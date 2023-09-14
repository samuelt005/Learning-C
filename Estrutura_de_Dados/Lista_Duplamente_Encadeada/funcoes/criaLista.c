#include "../global.h"

//Cria��o da lista com o in�cio apontando para null
LISTA *criaLista() {
    LISTA *inicio = (LISTA *) malloc(sizeof(LISTA)); // Aloca cabe�a da lista
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return inicio;
}