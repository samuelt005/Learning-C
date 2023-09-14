#include "../global.h"

void removeInicio(LISTA* lista) {
    if((*lista) != NULL) { // Verifica se a lista esta vazia
        node *tmp; // Cria um nó temporário
        tmp = *lista; // Copia o apontamento inicial da lista
        if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
            *lista = NULL; // Atribui o apontamento inicial para NULL
            free(tmp); // Elimina o apontamento para o único item da lista
            printf("Elemento removido com sucesso!\n");
        } else {
            *lista = tmp->prox; // Substitui o apontamento inicial pelo apontamento do próximo item da lista
            tmp->prox->ant = NULL; // Substitui o apontamento do segundo item da lista por NULL
            free(tmp); // Elimina o apontamento para o antigo primeiro item da lista
            printf("Elemento removido com sucesso!\n");
        }
    } else {
        printf("Lista já esta vazia!\n");
    }
}