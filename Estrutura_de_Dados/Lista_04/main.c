#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>

// Definindo a estrutura da lista
struct Node { // Criando o tipo do elemento da lsita
    int num; // Dado
    struct Node *prox;
};

typedef struct Node node; // Apelidando a lista para facilitar
typedef node *LISTA; // Declarando ponteiro do in�cio da lista

// Cria��o da lista com o in�cio apontando para null
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

// Fun��o para exibir toda a lista
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
void preencheLista(LISTA* lista) {
    for (int i = 0; i < 10; ++i) {
        node *novo = (node *) malloc(sizeof(node));
        if (novo == NULL) {
            printf("Erro na aloca��o de mem�ria...\n");
            exit(0);
        }

        // Gera um n�mero aleat�rio no intervalo de 1 a 10
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

// 3. Crie um programa que simule um sistema de pila onde o primeiro que entra e o �ltimo que sa�. A inser��o sempre ocorrer� no fim da lista. O
// programa dever� ter as duas op��es 1 ? inclui na pilha e 2 ? exclui da pilha. A cada inser��o ou remo��o a pilha deve ser apresentada na tela.

// 4. Escreva uma fun��o que remove o k-�simo n� da lista encadeada.

// 5. Considere uma lista de inteiros. Fa�a uma fun��o para retornar o n�mero de n�s da lista que possuem um n�mero primo armazenado.

/* 6. Considerando a implementa��o de uma lista encadeada para armazenar n�meros reais dada pelo tipo abaixo:
struct lista{
    float info;
    struct lista * prox;
};
typedef struct lista Lista;

Implemente uma fun��o que, dados um lista encadeada e um n�mero inteiro n�o negativo n, remova da lista seus n primeiros n�s e retorne a
lista resultante. Caso n seja maior ou igual ao que o cumprimento da lista, todos os seus elementos devem ser removidos e o resultado da fun��o
deve ser uma lista vazia.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Semente para a fun��o rand() baseada no tempo atual
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
                preencheLista(lista);
                exibeLista(lista);
                removeElementos(lista);
                exibeLista(lista);
                sleep(6);
                liberaLista(lista);
                system("cls");
                break;
            case 2:
                system("cls");

                sleep(2);
                system("cls");
                break;
            case 3:
                system("cls");

                sleep(4);
                system("cls");
                break;
            case 4:
                system("cls");

                sleep(2);
                system("cls");
                break;
            case 5:
                system("cls");

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
