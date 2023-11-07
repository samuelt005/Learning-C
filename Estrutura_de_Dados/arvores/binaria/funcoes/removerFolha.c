
void removeNoFolha(ArvBin *raiz, int aExcluir) {

    no *atual = *raiz;
    no *ant = NULL;

    while (atual != NULL) {
        if (aExcluir == atual->data) {
            if (ant == NULL) {
                // Caso em que o nó a ser removido é a raiz da árvore
                if (atual->esq == NULL && atual->dir == NULL) {
                    // Se for uma folha, a árvore ficará vazia
                    free(atual);
                    *raiz = NULL;
                    printf("Nó %d removido.\n", aExcluir);
                    sleep(2);
                    return;
                } else if (atual->esq == NULL) {
                    // Se não houver filho na esquerda, atualize a raiz
                    *raiz = atual->dir;
                } else if (atual->dir == NULL) {
                    // Se não houver filho na direita, atualize a raiz
                    *raiz = atual->esq;
                } else {
                    // Caso em que há filhos em ambas as direções
                    no *substituto = atual->dir;
                    no *antSubstituto = atual;
                    while (substituto->esq != NULL) {
                        antSubstituto = substituto;
                        substituto = substituto->esq;
                    }
                    atual->data = substituto->data;

                    if (antSubstituto == atual) {
                        antSubstituto->dir = substituto->dir;
                    } else {
                        antSubstituto->esq = substituto->dir;
                    }

                    free(substituto);
                }
            } else {
                // Caso em que o nó a ser removido não é a raiz
                if (atual->esq == NULL && atual->dir == NULL) {
                    // O nó a ser removido é uma folha
                    if (ant->esq == atual) {
                        ant->esq = NULL;
                    } else {
                        ant->dir = NULL;
                    }
                    system("cls");
                    printf("Nó %d removido.\n", aExcluir);
                    free(atual);
                    sleep(2);
                    return;
                } else if (atual->esq == NULL) {
                    // O nó a ser removido tem filhos a direita
                    if (ant->esq == atual) {
                        ant->esq = atual->dir;
                    } else {
                        ant->dir = atual->dir;
                    }
                    system("cls");
                    printf("Nó %d removido.\n", aExcluir);
                    free(atual);
                    sleep(2);
                    return;
                } else if (atual->dir == NULL) {
                    // O nó a ser removido tem filhos a esquerda
                    if (ant->esq == atual) {
                        ant->esq = atual->esq;
                    } else {
                        ant->dir = atual->esq;
                    }
                    system("cls");
                    printf("Nó %d removido.\n", aExcluir);
                    free(atual);
                    sleep(2);
                    return;
                } else {
                    // Caso em que há filhos em ambas as direções
                    no *substituto = atual->dir;
                    no *antSubstituto = atual;
                    while (substituto->esq != NULL) {
                        antSubstituto = substituto;
                        substituto = substituto->esq;
                    }
                    atual->data = substituto->data;

                    if (antSubstituto == atual) {
                        antSubstituto->dir = substituto->dir;
                    } else {
                        antSubstituto->esq = substituto->dir;
                    }

                    free(substituto);
                }
            }
            printf("Nó %d removido.\n", aExcluir);
            sleep(2);
            return;
        }

        ant = atual;
        if (aExcluir > atual->data) {
            atual = atual->dir;
        } else {
            atual = atual->esq;
        }
    }

    printf("Item não encontrado na árvore!\n");
    sleep(2);
}


void aExcluir(ArvBin *raiz) {
    if (*raiz == NULL) {
        printf("Não há dados para excluir!");
        sleep(2);
        return;
    }

    int aExcluir;
    char input[10], *endInput;

    printf("Número a excluir: ");
    fgets(input, sizeof(input), stdin);

    aExcluir = (int) strtol(input, &endInput, 10);
    if (*endInput != '\0' && *endInput != '\n') {
        printf("Entrada inválida.\n");
        sleep(2);
        return;
    } else {
        removeNoFolha(raiz, aExcluir);
    }
}

