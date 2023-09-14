#include "../global.h"

void insereInicio(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na aloca��o de mem�ria...\n");
        exit(0);
    }

    printf("Informe valor do novo elemento:\n");
    scanf("%d", &novo->num);
    if ((*lista) == NULL) { // Verifica se a lista esta vazia
        novo->prox = (*lista); // Novo item da lista recebe o apontamento do in�cio da lista
        *lista = novo; // Apontamento inicial da lista recebe o endere�o do novo item
        novo->ant = NULL; // Apontamento anterior do novo item recebe endere�o de NULL, pois � o in�cio da lista
    } else {
        novo->prox = (*lista);  // Novo item da lista recebe o apontamento do in�cio da lista
        *lista = novo; // Apontamento inicial da lista recebe o endere�o do novo item
        novo->prox->ant = novo; // Antigo primeiro item que j� existia recebe o endere�o anterior o item novo
        novo->ant = NULL; // Apontamento anterior do novo item recebe endere�o de NULL, pois � o in�cio da lista
    }
    printf("Item inserido com sucesso!\n");
}
