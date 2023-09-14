#include "../global.h"

void insereMeio(LISTA* lista) {
    node *novo = (node *) malloc(sizeof(node)); // Cria item
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
        printf("Item inserido com sucesso!\n");
        return;
    } else {
        node *tmp;
        tmp = *lista;

        // Caso em que a lista só tem um item
        if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
            if (tmp->num > novo->num) { // Se o único item for maior que o novo
                novo->prox = tmp;  // Novo->próximo recebe endereço do único item
                *lista = novo; // Apontamento inicial da lista recebe o endereço do novo item
                novo->prox->ant = novo; // Antigo primeiro item que já existia recebe o endereço anterior o item novo
                novo->ant = NULL; // Apontamento anterior do novo item recebe endereço de NULL, pois é o início da lista
            } else {
                novo->prox = NULL; // Novo->próximo recebe endereço NULL
                tmp->prox = novo; // Único item recebe endereço do novo
                novo->ant = tmp; // Apontamento do anterior do novo item recebe o antigo último
            }
            printf("Item inserido com sucesso!\n");
            return;
        }

        // Caso para inserir no meio
        do {
            if (tmp->num > novo->num) { // Se o número for menor que o primeiro da lista
                novo->prox = tmp; // Novo->próximo recebe endereço do único item
                tmp->ant = novo;
                novo->ant = NULL;
                *lista = novo; // Ponteiro inicial aponta para novo
                printf("Item inserido com sucesso!\n");
                return;
            }
            if (tmp->num < novo->num && tmp->prox->num > novo->num)  { // Se o número for maior que o atual e menor que o próximo
                novo->prox = tmp->prox;
                novo->ant = tmp;
                tmp->prox->ant = novo;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
            tmp = tmp->prox;
            if (tmp->num < novo->num && tmp->prox == NULL) { // Se o número for maior que o atual e for o último da lista
                novo->prox = NULL;
                tmp->prox = novo;
                novo->ant = tmp;
                printf("Item inserido com sucesso!\n");
                return;
            }
        } while (tmp->prox != NULL); //Repete enquanto não entrar em nenhuma das condições
    }
}