
void popularArvBin(ArvBin *raiz, int data) {
    no *novo = (no *) malloc(sizeof(no));

    if (novo == NULL) {
        printf("Sem memória disponível!\n");
        exit(0);
    }

    novo->data = data;
    novo->dir = NULL;
    novo->esq = NULL;
    if (*raiz == NULL) {
        *raiz = novo;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL) {
            ant = atual;
            if (novo->data == atual->data) {
                printf("Elemento já existe...");
                sleep(2);
                free(novo);
                return;
            }
            if (novo->data > atual->data) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }
        if (novo->data > ant->data) {
            ant->dir = novo;
        } else {
            ant->esq = novo;
        }
    }
}

void geraDados(ArvBin *raiz) {
    popularArvBin(raiz, 50);
    popularArvBin(raiz, 23);
    popularArvBin(raiz, 12);
    popularArvBin(raiz, 78);
    popularArvBin(raiz, 99);
    popularArvBin(raiz, 29);
    popularArvBin(raiz, 81);
    popularArvBin(raiz, 5);
    popularArvBin(raiz, 64);
    popularArvBin(raiz, 88);
}