#include "../global.h"

void insereMeio(LISTA* lista) {
    node *novo = (node *) malloc(sizeof(node)); // Cria item
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
        printf("Item inserido com sucesso!\n");
        return;
    } else {
        node *tmp;
        tmp = *lista;

        // Caso em que a lista s� tem um item
        if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
            if (tmp->num > novo->num) { // Se o �nico item for maior que o novo
                novo->prox = tmp;  // Novo->pr�ximo recebe endere�o do �nico item
                *lista = novo; // Apontamento inicial da lista recebe o endere�o do novo item
                novo->prox->ant = novo; // Antigo primeiro item que j� existia recebe o endere�o anterior o item novo
                novo->ant = NULL; // Apontamento anterior do novo item recebe endere�o de NULL, pois � o in�cio da lista
            } else {
                novo->prox = NULL; // Novo->pr�ximo recebe endere�o NULL
                tmp->prox = novo; // �nico item recebe endere�o do novo
                novo->ant = tmp; // Apontamento do anterior do novo item recebe o antigo �ltimo
            }
            printf("Item inserido com sucesso!\n");
            return;
        }

        // Caso para inserir no meio
        do {
            if (tmp->num > novo->num) { // Se o n�mero for menor que o primeiro da lista
                novo->prox = tmp; // Novo->pr�ximo recebe endere�o do �nico item
                tmp->ant = novo;
                novo->ant = NULL;
                *lista = novo; // Ponteiro inicial aponta para novo
                printf("Item inserido com sucesso!\n");
                return;
            }
            if (tmp->num < novo->num && tmp->prox->num > novo->num)  { // Se o n�mero for maior que o atual e menor que o pr�ximo
                novo->prox = tmp->prox;
                novo->ant = tmp;
                tmp->prox->ant = novo;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
            tmp = tmp->prox;
            if (tmp->num < novo->num && tmp->prox == NULL) { // Se o n�mero for maior que o atual e for o �ltimo da lista
                novo->prox = NULL;
                tmp->prox = novo;
                novo->ant = tmp;
                printf("Item inserido com sucesso!\n");
                return;
            }
        } while (tmp->prox != NULL); //Repete enquanto n�o entrar em nenhuma das condi��es
    }
}