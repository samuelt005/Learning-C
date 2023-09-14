#include "../global.h"

void removeMeio(LISTA* lista) {
    node *tmp;
    tmp = *lista;
    int aExcluir;
    printf("Insira o número que deseja remover:\n");
    scanf("%d", &aExcluir);

    if ((*lista) != NULL) { // Verifica se a lista esta vazia

        if (tmp->prox == NULL && tmp->num == aExcluir) { // Verifica se a lista tem apenas um item
            *lista = NULL; // Atribui o apontamento inicial para NULL
            free(tmp); // Elimina o apontamento para o único item da lista
            printf("Elemento %d removido com sucesso! (Único item da lista)\n", aExcluir);
            return;
        }

        if (tmp->num == aExcluir) { // Verifica se o primeiro item da lista é igual ao excluir
            *lista = tmp->prox; // Início da lista aponta para o segundo da lista
            tmp->prox->ant = NULL; // Segundo item da lista anterior aponta para NULL
            free(tmp); // Elimina o apontamento para o único item da lista
            printf("Elemento %d removido com sucesso! (Primeiro item da lista)\n", aExcluir);
            return;
        }

        while ((tmp->num) != aExcluir && tmp->prox != NULL) { // Loop para encontrar o elemento a excluir da lista
            tmp = tmp->prox; // Atribui o endereço atual de tmp para o próximo da lista
        } // Repete até tmp->prox ser igual a NULL

        if ((tmp->num) != aExcluir) {
            printf("Elemento %d não existe!\n", aExcluir);
            return;
        }

        if (tmp->num == aExcluir && tmp->prox == NULL) { // Verifica se o último item da lista é igual a excluir e se realmente é o ultimo
            tmp->ant->prox = NULL;
            free(tmp); // Elimina o apontamento para o último item da lista
            printf("Elemento %d removido com sucesso! (Último item da lista)\n", aExcluir);
            return;
        }

        tmp->ant->prox = tmp->prox; // Atribui o próximo apontamento do penúltimo item da lista para o próximo do temporário
        tmp->prox->ant = tmp->ant;
        free(tmp); // Elimina o apontamento para o item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else {
        printf("Lista já esta vazia!\n");
    }
}