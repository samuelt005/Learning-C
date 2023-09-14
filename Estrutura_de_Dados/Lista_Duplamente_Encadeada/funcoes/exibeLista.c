#include "../global.h"

void exibeLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        tmp = (*lista);
        printf("Lista crescente:\n");
        do {
            if (tmp->ant != NULL) {
                printf("%-4d <- Anterior\t", tmp->ant->num);
            } else {
                printf("NULL <- Anterior\t");
            }

            printf("N�mero: %-4d\t", tmp->num);

            if (tmp->prox != NULL) {
                printf("Pr�ximo -> %-4d\n", tmp->prox->num);
            } else {
                printf("Pr�ximo -> NULL\n");
            }
            tmp = tmp->prox;
        } while (tmp != NULL);

        printf("\nLista decrescente:\n");
        tmp = (*lista); // Reinicia a vari�vel tmp
        while (tmp->prox != NULL) { // Loop para chegar ao �ltimo item da lista
            tmp = tmp->prox;
        }
        do {
            if (tmp->ant != NULL) {
                printf("%-4d <- Anterior\t", tmp->ant->num);
            } else {
                printf("NULL <- Anterior\t");
            }

            printf("N�mero: %-4d\t", tmp->num);

            if (tmp->prox != NULL) {
                printf("Pr�ximo -> %-4d\n", tmp->prox->num);
            } else {
                printf("Pr�ximo -> NULL\n");
            }
            tmp = tmp->ant;
        } while (tmp != NULL);
    }
    printf("\n");
}