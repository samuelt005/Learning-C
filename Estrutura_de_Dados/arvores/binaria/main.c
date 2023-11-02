#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

struct No {
    int num;
    struct No *esq;
    struct No *dir;
};
typedef struct No no;
typedef no *ArvBin;

ArvBin *criaArvBin() {
    ArvBin *raiz = (ArvBin *) malloc(sizeof(ArvBin));
    if (raiz != NULL) {
        *raiz = NULL;
    } else {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return raiz;
}

// TODO corrigir fun��o pois n�o esta funcionando
void insereArvBin(ArvBin *raiz) {
    no *novo = (no *) malloc(sizeof(no));
    char input[10], *endInput;

    if (novo == NULL) {
        printf("Sem mem�ria dispon�vel!\n");
        exit(0);
    }
    printf("Novo elemento: ");

    fgets(input, sizeof(input), stdin);

    novo->num = (int) strtol(input, &endInput, 10);
    if (*endInput != '\0' && *endInput != '\n') {
        printf("Entrada inv�lida.\n");
        sleep(2);
        return;
    }

    printf("%d", novo->num);
    sleep(2);

    novo->dir = NULL;
    novo->esq = NULL;
    if (*raiz == NULL) {
        *raiz = novo;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL) {
            ant = atual;
            if (novo->num == atual->num) {
                printf("Elemento j� existe...");
                sleep(2);
                free(novo);
                return;
            }
            if (novo->num > atual->num) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }
        if (novo->num > ant->num) {
            ant->dir = novo;
        } else {
            ant->esq = novo;
        }
    }
}

void liberaNo(no *no_liberar) {
    if (no_liberar == NULL) {
        return;
    } else {
        liberaNo(no_liberar->esq);
        liberaNo(no_liberar->dir);
        free(no_liberar);
    }
}

void liberaArvBin(ArvBin *raiz) {
    if (raiz == NULL) {
        return;
    } else {
        liberaNo(*raiz);
    }
    free(raiz);
}

void removeNoFolha(ArvBin *raiz) {
    int toDelete;

    printf("N�mero a excluir: ");
    scanf("%d", &toDelete);

    if (*raiz == NULL) {
        printf("N�o a dados para excluir!");
        return;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL) {
            ant = atual;
            if (toDelete == atual->num) {
                if (ant->esq == NULL) {
                    ant->dir = NULL;
                    free(atual);
                    return;
                }
                if (atual->esq == NULL) {
                    ant->dir = atual->dir;
                    free(atual);
                    return;
                }
            }
            if (toDelete > atual->num) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }

    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int running = 1;
    while (running == 1) {
        char input[10], *endInput;
        int selector;

        ArvBin *raiz = criaArvBin();

        system("cls"); //Limpeza do terminal

        //Menu principal
        printf("==================================== MENU PRINCIPAL ===================================\n");
        printf("1 - Cadastrar na �rvore\n");
        printf("2 - Excluir da �rvore\n");
        printf("0 - Sair\n\n");
        printf("Selecione a op��o desejada:\n");
        fgets(input, sizeof(input), stdin); // L� uma linha de entrada como uma string

        selector = (int) strtol(input, &endInput, 10); // Converter a string em um n�mero inteiro
        if (*endInput != '\0' && *endInput != '\n') { // Verificar por erros de convers�o
            printf("Entrada inv�lida. Digite um n�mero.\n");
            sleep(2);
            continue; // Volta para o in�cio do menu
        }

        system("cls");

        switch (selector) {
            // Case para cadastrar na �rvore bin�ria
            case 1:
                system("cls");
                insereArvBin(raiz);
                system("cls");
                break;

                // Case para excluir n� da �rvore bin�ria
            case 2:
                system("cls");
                removeNoFolha(raiz);
                system("cls");
                break;

                //Case para encerrar o programa
            case 0:
                printf("Saindo... volte sempre!");
                printf(" :)\n");
                sleep(2);
                liberaArvBin(raiz);
                running = 0;
                break;

                //Case de op��o inv�lida
            default:
                printf("Op��o inv�lida!");
                sleep(2);
                break;
        } //End Switch
    }
}
