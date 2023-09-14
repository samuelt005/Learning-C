#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

// Definindo a estrutura da lista
struct Node { // Criando o tipo do elemento da lsita
    int num; // Dado
    struct Node *prox;
};

typedef struct Node node; // Apelidando a lista para facilitar
typedef node *LISTA; // Declarando ponteiro do in�cio da lista

//Cria��o da lista com o in�cio apontando para null
LISTA *criaLista() {
    LISTA *inicio = (LISTA *) malloc(sizeof(LISTA)); // Aloca cabe�a da lista
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return inicio;
}

void insereInicio(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na aloca��o de mem�ria...\n");
        exit(0);
    }

    printf("Informe valor do novo elemento:\n");
    scanf("%d", &novo->num);
    novo->prox = (*lista);
    *lista = novo;
    printf("Item inserido com sucesso!\n");
}

void insereFinal(LISTA *lista) {
    node *novo = (node *) malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na aloca��o de mem�ria...\n");
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
    printf("Item inserido com sucesso!\n");
}

void exibeLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        tmp = (*lista);
        printf("Lista:\n");
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
        printf("Lista liberada com sucesso!\n");
    }
}

void removeInicio(LISTA* lista) {
    if((*lista) != NULL) { // Verifica se a lista esta vazia
        node *tmp; // Cria um n� tempor�rio
        tmp = *lista; // Copia o apontamento inicial da lista
        *lista = tmp->prox; // Substitui o apontamento inicial pelo apontamento do pr�ximo item da lista
        free(tmp); // Elimina o apontamento para o antigo primeiro item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista j� esta vazia!\n");
    }
}

void removeFinal(LISTA* lista) {
    node *antNode, *tmp; // Cria um para o anterior e um n� tempor�rio
    tmp = *lista; // Copia o apontamento inicial da lista
    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o �nico item da lista
        printf("Elemento removido com sucesso!\n");
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while (tmp->prox != NULL) { // Loop para encontrar o �ltimo elemento da lista
            antNode = tmp; // antNode vai acompanhar o tmp uma casa anterior
            tmp = tmp->prox; // Atribui o endere�o atual de tmp para o pr�ximo da lista
        } // Repete at� tmp->prox ser igual a NULL
        antNode->prox = NULL; // Atribui o proximo apontamento do penultimo item da lista para NULL
        free(tmp); // Elimina o apontamento para o antigo �ltimo item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista j� esta vazia!\n");
    }
}

void insereMeio(LISTA* lista) {
    if( (*lista) == NULL) { // Verifica se a lista esta vazia
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        tmp = *lista;
        node *novo = (node *) malloc(sizeof(node)); // Cria item
        if (novo == NULL) {
            printf("Erro na aloca��o de mem�ria...\n");
            exit(0);
        }

        printf("Informe valor do novo elemento:\n");
        scanf("%d", &novo->num);

        // Caso em que a lista s� tem um item
        if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
            if (tmp->num > novo->num) { // Se o �nico item for maior que o novo
                novo->prox = tmp; // Novo->pr�ximo recebe endere�o do �nico item
                *lista = novo; // Ponteiro inicial aponta para novo
            } else {
                novo->prox = NULL; // Novo->pr�ximo recebe endere�o NULL
                tmp->prox = novo; // �nico item recebe endere�o do novo
            }
            printf("Item inserido com sucesso!\n");
            return;
        }

        // Caso para inserir no meio
        do {
            if (tmp->num > novo->num) { // Se o n�mero for menor que o primeiro da lista
                novo->prox = tmp; // Novo->pr�ximo recebe endere�o do �nico item
                *lista = novo; // Ponteiro inicial aponta para novo
                printf("Item inserido com sucesso!\n");
                return;
            }
            if (tmp->num < novo->num && tmp->prox->num > novo->num)  { // Se o n�mero for maior que o atual e menor que o pr�ximo
                novo->prox = tmp->prox;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
            tmp = tmp->prox;
            if (tmp->num < novo->num && tmp->prox == NULL) { // Se o n�mero for maior que o atual o atual aponta para null (� o �ltimo da lista)
                novo->prox = NULL;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
        } while (tmp->prox != NULL); //Repete enquanto n�o entrar em nenhuma das condi��es

    }
}

void removeMeio(LISTA* lista) {
    node *antNode, *tmp;
    tmp = *lista;
    int aExcluir;
    printf("Insira o n�mero que deseja remover:\n");
    scanf("%d", &aExcluir);

    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o �nico item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while ((tmp->num) != aExcluir && tmp->prox != NULL) { // Loop para encontrar o elemento a excluir da lista
            antNode = tmp; // antNode vai acompanhar o tmp uma casa anterior
            tmp = tmp->prox; // Atribui o endere�o atual de tmp para o pr�ximo da lista
        } // Repete at� tmp->prox ser igual a NULL
        if ((tmp->num) != aExcluir) {
            printf("Elemento n�o existe!\n");
            return;
        }
        antNode->prox = tmp->prox; // Atribui o pr�ximo apontamento do pen�ltimo item da lista para o pr�ximo do tempor�rio
        free(tmp); // Elimina o apontamento para o item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else {
        printf("Lista j� esta vazia!\n");
    }
}



void ordenaLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        int aux, flag;
        do {
            flag = 0; // Flag para verificar se foi alterado algum dado na lista
            tmp = (*lista);
            while (tmp->prox != NULL) {
                if (tmp->num > tmp->prox->num) {
                    aux = tmp->num; // Atribui o n�mero atual para a vari�vel auxiliar
                    tmp->num = tmp->prox->num; // Atribui o n�mero do pr�ximo para o atual
                    tmp->prox->num = aux; // Atribui o salvo no aux para o pr�ximo n�mero
                    flag++; // Se entrar na condi��o adiciona valor na flag
                    exibeLista(lista);
                }
                tmp = tmp->prox; // Passa o endere�o atual para o pr�ximo da lista
            }
        } while (flag != 0);
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    LISTA* lista = criaLista();
    int op;
    do {
        printf("---------------- MENU ----------------\n");
        printf("1 - Inserir no in�cio\n");
        printf("2 - Inserir no final\n");
        printf("3 - Exibir lista\n");
        printf("4 - Liberar lista\n");
        printf("5 - Ordenar lista\n");
        printf("6 - Remover primeiro item\n");
        printf("7 - Remover �ltimo item\n");
        printf("8 - Insere item no meio\n");
        printf("9 - Remover item espec�fico\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                insereInicio(lista);
                sleep(2);
                system("cls");
                break;
            case 2:
                system("cls");
                insereFinal(lista);
                sleep(2);
                system("cls");
                break;
            case 3:
                system("cls");
                exibeLista(lista);
                sleep(4);
                system("cls");
                break;
            case 4:
                system("cls");
                liberaLista(lista);
                sleep(2);
                system("cls");
                break;
            case 5:
                system("cls");
                ordenaLista(lista);
                sleep(2);
                system("cls");
                break;
            case 6:
                system("cls");
                removeInicio(lista);
                sleep(2);
                system("cls");
                break;
            case 7:
                system("cls");
                removeFinal(lista);
                sleep(2);
                system("cls");
                break;
            case 8:
                system("cls");
                insereMeio(lista);
                sleep(2);
                system("cls");
                break;
            case 9:
                system("cls");
                removeMeio(lista);
                sleep(2);
                system("cls");
                break;
            case 0:
                system("cls");
                op = 0;
                printf("Saindo!");
                sleep(2);
                break;
            default:
                system("cls");
                printf("Op��o n�o cadastrada!");
                sleep(2);
                system("cls");
                break;
        }
    } while (op !=0);
    liberaLista(lista);
    free(lista);
}