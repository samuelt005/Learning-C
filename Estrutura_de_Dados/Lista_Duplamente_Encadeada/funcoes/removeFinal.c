#include "../global.h"

void removeFinal(LISTA* lista) {
    node *antNode, *tmp; // Cria um para o anterior e um n� tempor�rio
    tmp = *lista; // Copia o apontamento inicial da lista
    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o �nico item da lista
        printf("Elemento removido com sucesso!\n");
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while (tmp->prox != NULL) { // Loop para encontrar o �ltimo elemento da lista
            tmp = tmp->prox; // Atribui o endere�o atual de tmp para o pr�ximo da lista
        } // Repete at� tmp->prox ser igual a NULL
        tmp->ant->prox = NULL; // Atribui o proximo apontamento do penultimo item da lista para NULL
        free(tmp); // Elimina o apontamento para o antigo �ltimo item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista j� esta vazia!\n");
    }
}