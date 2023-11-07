
// Método em Ordem
void imprimirArvoreEmOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        imprimirArvoreEmOrdem(&((*raiz)->esq));
        printf("%d ", (*raiz)->data);
        imprimirArvoreEmOrdem(&((*raiz)->dir));
    }
}

// Método Pré-Ordem
void imprimirArvorePreOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        printf("%d ", (*raiz)->data);
        imprimirArvorePreOrdem(&((*raiz)->esq));
        imprimirArvorePreOrdem(&((*raiz)->dir));
    }
}

// Método Pós-Ordem
void imprimirArvorePosOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        imprimirArvorePosOrdem(&((*raiz)->esq));
        imprimirArvorePosOrdem(&((*raiz)->dir));
        printf("%d ", (*raiz)->data);
    }
}

// Método Bidimensional
void printTree(no *aux, int espaco) {
    if (aux == NULL) {
        return;
    }

    // Aumenta o espaçamento entre níveis
    espaco += 5;

    // Processa o nó da direita
    printTree(aux->esq, espaco);

    // Imprime o nó atual com espaçamento
    printf("\n");
    for (int i = 5; i < espaco; i++) {
        printf(" ");
    }
    printf("%d\n", aux->data);

    // Processa o nó da esquerda
    printTree(aux->dir, espaco);
}


// Menu de seleção de método
void imprimirArvore(ArvBin *raiz, int altura) {
    int running = 1;

    while (running == 1) {
        char input[10], *endInput;
        int selector;

        printf("==================================== MÉTODO DE IMPRESSÃO ===================================\n");
        printf("1 - Em Ordem\n");
        printf("2 - Pré-Ordem\n");
        printf("3 - Pós-Ordem\n");
        printf("4 - Bidimensional\n");
        printf("0 - Voltar\n\n");
        printf("Selecione o método desejado:\n");
        fgets(input, sizeof(input), stdin);

        selector = (int) strtol(input, &endInput, 10);
        if (*endInput != '\0' && *endInput != '\n') {
            printf("Entrada inválida. Digite um número.\n");
            sleep(2);
            continue;
        }

        system("cls");

        switch (selector) {
            // Método em Ordem
            case 1:
                system("cls");
                imprimirArvoreEmOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // Método Pré-Ordem
            case 2:
                system("cls");
                imprimirArvorePreOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // Método Pós-Ordem
            case 3:
                system("cls");
                imprimirArvorePosOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // Método Pós-Ordem
            case 4:
                system("cls");
                printTree(*raiz, 0);
                printf("\n");
                sleep(4);
                system("cls");
                break;

                // Case para voltar
            case 0:
                printf("Voltando...!");
                running = 0;
                break;

                // Case de opção inválida
            default:
                printf("Opção inválida!");
                sleep(2);
                break;
        }
    }
}