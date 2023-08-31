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
    printf("Item inserido com sucesso!\n");
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
        node *tmp; // Cria um nó temporário
        tmp = *lista; // Copia o apontamento inicial da lista
        *lista = tmp->prox; // Substitui o apontamento inicial pelo apontamento do próximo item da lista
        free(tmp); // Elimina o apontamento para o antigo primeiro item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista já esta vazia!\n");
    }
}

void removeFinal(LISTA* lista) {
    node *antNode, *tmp; // Cria um para o anterior e um nó temporário
    tmp = *lista; // Copia o apontamento inicial da lista
    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o único item da lista
        printf("Elemento removido com sucesso!\n");
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while (tmp->prox != NULL) { // Loop para encontrar o último elemento da lista
            antNode = tmp; // antNode vai acompanhar o tmp uma casa anterior
            tmp = tmp->prox; // Atribui o endereço atual de tmp para o próximo da lista
        } // Repete até tmp->prox ser igual a NULL
        antNode->prox = NULL; // Atribui o proximo apontamento do penultimo item da lista para NULL
        free(tmp); // Elimina o apontamento para o antigo último item da lista
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista já esta vazia!\n");
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
            printf("Erro na alocação de memória...\n");
            exit(0);
        }

        printf("Informe valor do novo elemento:\n");
        scanf("%d", &novo->num);

        // Caso em que a lista só tem um item
        if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
            if (tmp->num > novo->num) { // Se o único item for maior que o novo
                novo->prox = tmp; // Novo->próximo recebe endereço do único item
                *lista = novo; // Ponteiro inicial aponta para novo
            } else {
                novo->prox = NULL; // Novo->próximo recebe endereço NULL
                tmp->prox = novo; // Único item recebe endereço do novo
            }
            printf("Item inserido com sucesso!\n");
            return;
        }

        // Caso para inserir no meio
        do {
            if (tmp->num > novo->num) { // Se o número for menor que o primeiro da lista
                novo->prox = tmp; // Novo->próximo recebe endereço do único item
                *lista = novo; // Ponteiro inicial aponta para novo
                printf("Item inserido com sucesso!\n");
                return;
            }
            if (tmp->num < novo->num && tmp->prox->num > novo->num)  { // Se o número for maior que o atual e menor que o próximo
                novo->prox = tmp->prox;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
            tmp = tmp->prox;
            if (tmp->num < novo->num && tmp->prox == NULL) { // Se o número for maior que o atual o atual aponta para null (é o último da lista)
                novo->prox = NULL;
                tmp->prox = novo;
                printf("Item inserido com sucesso!\n");
                return;
            }
        } while (tmp->prox != NULL); //Repete enquanto não entrar em nenhuma das condições

    }
}

void removeMeio(LISTA* lista) {
    node *antNode, *tmp;
    tmp = *lista;
    int aExcluir;
    printf("Insira o número que deseja remover:\n");
    scanf("%d", &aExcluir);

    if ((*lista) != NULL && tmp->prox == NULL) { // Verifica se a lista tem apenas um item
        *lista = NULL; // Atribui o apontamento inicial para NULL
        free(tmp); // Elimina o apontamento para o único item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else if ((*lista) != NULL) { // Verifica se a lista esta vazia
        while ((tmp->num) != aExcluir && tmp->prox != NULL) { // Loop para encontrar o elemento a excluir da lista
            antNode = tmp; // antNode vai acompanhar o tmp uma casa anterior
            tmp = tmp->prox; // Atribui o endereço atual de tmp para o próximo da lista
        } // Repete até tmp->prox ser igual a NULL
        if ((tmp->num) != aExcluir) {
            printf("Elemento não existe!\n");
            return;
        }
        antNode->prox = tmp->prox; // Atribui o próximo apontamento do penúltimo item da lista para o próximo do temporário
        free(tmp); // Elimina o apontamento para o item da lista
        printf("Elemento %d removido com sucesso!\n", aExcluir);
    } else {
        printf("Lista já esta vazia!\n");
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
                    aux = tmp->num; // Atribui o número atual para a variável auxiliar
                    tmp->num = tmp->prox->num; // Atribui o número do próximo para o atual
                    tmp->prox->num = aux; // Atribui o salvo no aux para o próximo número
                    flag++; // Se entrar na condição adiciona valor na flag
                    exibeLista(lista);
                }
                tmp = tmp->prox; // Passa o endereço atual para o próximo da lista
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
        printf("1 - Inserir no início\n");
        printf("2 - Inserir no final\n");
        printf("3 - Exibir lista\n");
        printf("4 - Liberar lista\n");
        printf("5 - Ordenar lista\n");
        printf("6 - Remover primeiro item\n");
        printf("7 - Remover último item\n");
        printf("8 - Insere item no meio\n");
        printf("9 - Remover item específico\n");
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
                printf("Opção não cadastrada!");
                sleep(2);
                system("cls");
                break;
        }
    } while (op !=0);
    liberaLista(lista);
    free(lista);
}