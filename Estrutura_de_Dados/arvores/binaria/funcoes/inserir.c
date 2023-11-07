
void insereArvBin(ArvBin *raiz) {
    no *novo = (no *) malloc(sizeof(no));
    char input[10], *endInput;

    if (novo == NULL) {
        printf("Sem memória disponível!\n");
        exit(0);
    }

    printf("Novo elemento: ");

    fgets(input, sizeof(input), stdin);

    novo->data = (int) strtol(input, &endInput, 10);
    if (*endInput != '\0' && *endInput != '\n') {
        printf("Entrada inválida.\n");
        sleep(2);
        return;
    }

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