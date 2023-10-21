#include <stdio.h>
#include <stdlib.h>

struct No {
    int num;
    struct No *esq;
    struct No *dir;
};
typedef struct No no;
typedef no *ArvBin;

ArvBin* criaArvBin() {
    ArvBin  *raiz = (ArvBin*) malloc (sizeof(ArvBin));
    if(raiz != NULL) {
        *raiz = NULL;
    } else {
        printf("Erro na alocação...\n");
        exit(0);
    }
    return raiz;
}

void insereArvBin(ArvBin* raiz) {
        no* novo = (no*) malloc(sizeof(no));
    if(novo == NULL) {
        printf("Sem memória disponível!\n");
        exit(0);
    }
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if(*raiz == NULL) {
        *raiz = novo;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual !=NULL) {
            ant = atual;
            if(novo->num == atual->num) {
                printf("Elemento já existe...");
                free(novo);
                return;
            }
            if(novo->num > atual->num) {
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
    if(no_liberar == NULL) {
        return;
    } else {
        liberaNo(no_liberar->esq);
        liberaNo(no_liberar->dir);
        free(no_liberar);
    }
}

void liberaArvBin(ArvBin* raiz) {
    if(raiz == NULL) {
        return;
    } else {
        liberaNo(*raiz);
    }
    free(raiz);
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
