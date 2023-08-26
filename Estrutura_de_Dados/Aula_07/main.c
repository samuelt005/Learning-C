#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura da lista
struct Node { // Criando o tipo do elemento da lsita
    int num; // Dado
    struct Node *prox;
};

typedef struct Node node; // Apelidando a lista para facilitar
typedef node *LISTA; // Declarando ponteiro do início da lista

//Criação da lista com o início apontando para null
LISTA *criaLista() {
    LISTA *inicio = (LISTA *) malloc(sizeof(LISTA)); // Aloca cabeça da lista
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na alocação...\n");
        exit(0);
    }
    return inicio;
}

void insereInicio(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação de memória...\n");
        exit(0);
    }

    printf("Informe valor do novo elemento:\n");
    scanf("%d", &novo->num);
    novo->prox = (*lista);
    *lista = novo;
}

void insereFinal(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação de memória...\n");
        exit(0);
    }

    printf("Informe valor do novo elemento:\n");
    scanf("%d", &novo->num);
    novo->prox = NULL;
    if ((*lista) == NULL) {
        *lista = novo;
    } else {
        node *tmp;
        tmp = (*lista);
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        tmp->prox = novo;
    }
}

void exibeLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        tmp = (*lista);
        while (tmp != NULL) {
            printf("%d\t", tmp->num);
            tmp = tmp->prox;
        }
    }
    printf("\n");
}

void liberaLista(LISTA* lista) {
    if((*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        while ((*lista) != NULL) {
            tmp = *lista;
            *lista = (*lista)->prox;
            free(tmp);
        }
    }
}

int main() {
    LISTA* primeiraLista;
    primeiraLista = criaLista();
    insereInicio(primeiraLista);
    insereInicio(primeiraLista);
    insereInicio(primeiraLista);
    insereInicio(primeiraLista);

    exibeLista(primeiraLista);
    liberaLista(primeiraLista);
}