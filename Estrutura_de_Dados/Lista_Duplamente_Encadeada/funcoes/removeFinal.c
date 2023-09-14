#include "../global.h"

void removeFinal(LISTA* lista) {
    node *antNode, *tmp; // Cria um para o anterior e um nó temporário
    tmp = *lista; // Copia o apontamento inicial da lista
    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o único item da lista
        printf("Elemento removido com sucesso!\n");
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while (tmp->prox != NULL) { // Loop para encontrar o último elemento da lista
            tmp = tmp->prox; // Atribui o endereço atual de tmp para o próximo da lista
        } // Repete até tmp->prox ser igual a NULL
        tmp->ant->prox = NULL; // Atribui o proximo apontamento do penultimo item da lista para NULL
        free(tmp); // Elimina o apontamento para o antigo último item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista já esta vazia!\n");
    }
}