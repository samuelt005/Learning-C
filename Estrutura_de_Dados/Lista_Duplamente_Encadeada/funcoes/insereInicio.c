#include "../global.h"

void insereInicio(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação de memória...\n");
        exit(0);
    }

    printf("Informe valor do novo elemento:\n");
    scanf("%d", &novo->num);
    if ((*lista) == NULL) { // Verifica se a lista esta vazia
        novo->prox = (*lista); // Novo item da lista recebe o apontamento do início da lista
        *lista = novo; // Apontamento inicial da lista recebe o endereço do novo item
        novo->ant = NULL; // Apontamento anterior do novo item recebe endereço de NULL, pois é o início da lista
    } else {
        novo->prox = (*lista);  // Novo item da lista recebe o apontamento do início da lista
        *lista = novo; // Apontamento inicial da lista recebe o endereço do novo item
        novo->prox->ant = novo; // Antigo primeiro item que já existia recebe o endereço anterior o item novo
        novo->ant = NULL; // Apontamento anterior do novo item recebe endereço de NULL, pois é o início da lista
    }
    printf("Item inserido com sucesso!\n");
}
