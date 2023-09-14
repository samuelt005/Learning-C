#include "../global.h"

void removeMeio(LISTA* lista) {
    node *tmp;
    tmp = *lista;
    int aExcluir;
    printf("Insira o n�mero que deseja remover:\n");
    scanf("%d", &aExcluir);

    if ((*lista) != NULL) { // Verifica se a lista esta vazia

        if (tmp->prox == NULL && tmp->num == aExcluir) { // Verifica se a lista tem apenas um item
            *lista = NULL; // Atribui o apontamento inicial para NULL
            free(tmp); // Elimina o apontamento para o �nico item da lista
            printf("Elemento %d removido com sucesso! (�nico item da lista)\n", aExcluir);
            return;
        }

        if (tmp->num == aExcluir) { // Verifica se o primeiro item da lista � igual ao excluir
            *lista = tmp->prox; // In�cio da lista aponta para o segundo da lista
            tmp->prox->ant = NULL; // Segundo item da lista anterior aponta para NULL
            free(tmp); // Elimina o apontamento para o �nico item da lista
            printf("Elemento %d removido com sucesso! (Primeiro item da lista)\n", aExcluir);
            return;
        }

        while ((tmp->num) != aExcluir && tmp->prox != NULL) { // Loop para encontrar o elemento a excluir da lista
            tmp = tmp->prox; // Atribui o endere�o atual de tmp para o pr�ximo da lista
        } // Repete at� tmp->prox ser igual a NULL

        if ((tmp->num) != aExcluir) {
            printf("Elemento %d n�o existe!\n", aExcluir);
            return;
        }

        if (tmp->num == aExcluir && tmp->prox == NULL) { // Verifica se o �ltimo item da lista � igual a excluir e se realmente � o ultimo
            tmp->ant->prox = NULL;
            free(tmp); // Elimina o apontamento para o �ltimo item da lista
            printf("Elemento %d removido com sucesso! (�ltimo item da lista)\n", aExcluir);
            return;
        }

        tmp->ant->prox = tmp->prox; // Atribui o pr�ximo apontamento do pen�ltimo item da lista para o pr�ximo do tempor�rio
        tmp->prox->ant = tmp->ant;
        free(tmp); // Elimina o apontamento para o item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else {
        printf("Lista j� esta vazia!\n");
    }
}