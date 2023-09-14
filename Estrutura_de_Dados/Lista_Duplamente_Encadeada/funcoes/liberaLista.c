#include "../global.h"

void liberaLista(LISTA* lista) {
    if((*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        while ((*lista) != NULL) {
            tmp = *lista;
            *lista = (*lista)->prox;
            free(tmp);
        }
        printf("Lista liberada com sucesso!\n");
    }
}