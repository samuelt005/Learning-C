#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>

struct Node {
    int num;
    struct Node *prox;
};

typedef struct Node node;
typedef node *LISTA;

LISTA *criaLista() {
    LISTA *inicio = (LISTA *) malloc(sizeof(LISTA));
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return inicio;
}

void exibeLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        tmp = (*lista);
        printf("Lista:\n");
        while (tmp != NULL) {
            printf("%d ", tmp->num);
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

// 1. Seja uma lista din�mica e encadeada com elementos repetidos, implemente uma rotina para eliminar todas as ocorr�ncias de X da lista.
void geraLista(LISTA* lista) {
    for (int i = 0; i < 10; ++i) {
        node *novo = (node *) malloc(sizeof(node));
        if (novo == NULL) {
            printf("Erro na aloca��o de mem�ria...\n");
            exit(0);
        }

        int numeroAleatorio = (rand() % 10) + 1;

        novo->num = numeroAleatorio;
        novo->prox = (*lista);
        *lista = novo;
    }
}

void removeElementos(LISTA* lista) {
    node *antNode, *tmp;
    tmp = *lista;
    int aExcluir;
    printf("Insira o n�mero que deseja remover:\n");
    scanf("%d", &aExcluir);

    while (tmp != NULL) {
        if (tmp->num == aExcluir && (*lista) == tmp) {
            *lista = tmp->prox;
            tmp = tmp->prox;
            free(tmp);
            continue;
        }

        if (tmp->num == aExcluir) {
            antNode->prox = tmp->prox;
            antNode = tmp;
            tmp = tmp->prox;
            free(tmp);
            continue;
        }
        antNode = tmp;
        tmp = tmp->prox;
    }
}

// 2. Crie um programa que simule um sistema de fila onde o primeiro que entra � o primeiro que sai. A inser��o sempre ocorrer� no inicio da lista. O
// programa deve ter as duas op��es 1 ? inclui na fila e 2 ? exclui da fila. A cada inser��o ou remo��o a fila deve ser apresentada na tela.
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

void removeFinal(LISTA* lista) {
    node *antNode, *tmp;
    tmp = *lista;
    if ((*lista) != NULL && tmp->prox == NULL) {
        *lista = NULL;
        free(tmp);
        printf("Elemento removido com sucesso!\n");
    } else if ((*lista) != NULL) {
        while (tmp->prox != NULL) {
            antNode = tmp;
            tmp = tmp->prox;
        }
        antNode->prox = NULL;
        free(tmp);
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista j� esta vazia!\n");
    }
}

void questao2(LISTA* lista) {
    int op;
    do {
        printf("---------------- MENU ----------------\n");
        printf("1 - Inclui na fila\n");
        printf("2 - Exclui da fila\n");
        printf("0 - Voltar\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                insereInicio(lista);
                exibeLista(lista);
                sleep(2);
                system("cls");
                break;
            case 2:
                system("cls");
                removeFinal(lista);
                exibeLista(lista);
                sleep(2);
                system("cls");
                break;
            case 0:
                system("cls");
                op = 0;
                printf("Voltando!");
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
}

// 3. Crie um programa que simule um sistema de pilha onde o primeiro que entra e o �ltimo que sa�. A inser��o sempre ocorrer� no fim da lista. O
// programa dever� ter as duas op��es 1 ? inclui na pilha e 2 ? exclui da pilha. A cada inser��o ou remo��o a pilha deve ser apresentada na tela.
void removeInicio(LISTA* lista) {
    if((*lista) != NULL) {
        node *tmp;
        tmp = *lista;
        *lista = tmp->prox;
        free(tmp);
        printf("Elemento removido com sucesso!\n");
    } else {
        printf("Lista j� esta vazia!\n");
    }
}

void questao3(LISTA* lista) {
    int op;
    do {
        printf("---------------- MENU ----------------\n");
        printf("1 - Inclui na pilha\n");
        printf("2 - Exclui da pilha\n");
        printf("0 - Voltar\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                insereInicio(lista);
                exibeLista(lista);
                sleep(2);
                system("cls");
                break;
            case 2:
                system("cls");
                removeInicio(lista);
                exibeLista(lista);
                sleep(2);
                system("cls");
                break;
            case 0:
                system("cls");
                op = 0;
                printf("Voltando!");
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
}
// 4. Escreva uma fun��o que remove o k-�simo n� da lista encadeada.
void removeNo(LISTA *lista) {
    node *antNode, *tmp;
    tmp = *lista;
    int aExcluir, index = 0;
    printf("Insira o n� que deseja remover:\n");
    scanf("%d", &aExcluir);

    if (aExcluir == 1) {
        removeInicio(lista);
        return;
    }

    while (index != (aExcluir - 1)) {
        antNode = tmp;
        tmp = tmp->prox;
        index++;
    }

    antNode->prox = tmp->prox;
    free(tmp);
    printf("N� %d removido com sucesso!\n", aExcluir);
}

// 5. Considere uma lista de inteiros. Fa�a uma fun��o para retornar o n�mero de n�s da lista que possuem um n�mero primo armazenado.
void geraListaMaior(LISTA *lista) {
    for (int i = 0; i < 50; ++i) {
        node *novo = (node *) malloc(sizeof(node));
        if (novo == NULL) {
            printf("Erro na aloca��o de mem�ria...\n");
            exit(0);
        }

        int numeroAleatorio = (rand() % 100) + 1;

        novo->num = numeroAleatorio;
        novo->prox = (*lista);
        *lista = novo;
    }
}

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void contaPrimos(LISTA* lista) {
    int contador = 0;
    node *tmp;
    tmp = *lista;
    while (tmp != NULL) {
        if (ehPrimo(tmp->num)) {
            contador++;
        }
        tmp = tmp->prox;
    }
    printf("Quantidade de n�s com n�meros primos: %d", contador);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    LISTA* lista = criaLista();
    int op;
    do {
        printf("---------------- MENU ----------------\n");
        printf("Exerc�cio - 1\n");
        printf("Exerc�cio - 2\n");
        printf("Exerc�cio - 3\n");
        printf("Exerc�cio - 4\n");
        printf("Exerc�cio - 5\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                geraLista(lista);
                exibeLista(lista);
                removeElementos(lista);
                exibeLista(lista);
                sleep(6);
                liberaLista(lista);
                system("cls");
                break;
            case 2:
                system("cls");
                questao2(lista);
                sleep(2);
                system("cls");
                break;
            case 3:
                system("cls");
                questao3(lista);
                sleep(4);
                system("cls");
                break;
            case 4:
                system("cls");
                geraLista(lista);
                exibeLista(lista);
                removeNo(lista);
                exibeLista(lista);
                sleep(10);
                liberaLista(lista);
                system("cls");
                break;
            case 5:
                system("cls");
                geraListaMaior(lista);
                exibeLista(lista);
                contaPrimos(lista);
                sleep(10);
                liberaLista(lista);
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
