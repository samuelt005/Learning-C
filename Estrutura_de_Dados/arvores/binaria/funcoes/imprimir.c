
// M�todo em Ordem
void imprimirArvoreEmOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        imprimirArvoreEmOrdem(&((*raiz)->esq));
        printf("%d ", (*raiz)->data);
        imprimirArvoreEmOrdem(&((*raiz)->dir));
    }
}

// M�todo Pr�-Ordem
void imprimirArvorePreOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        printf("%d ", (*raiz)->data);
        imprimirArvorePreOrdem(&((*raiz)->esq));
        imprimirArvorePreOrdem(&((*raiz)->dir));
    }
}

// M�todo P�s-Ordem
void imprimirArvorePosOrdem(ArvBin *raiz) {
    if (*raiz != NULL) {
        imprimirArvorePosOrdem(&((*raiz)->esq));
        imprimirArvorePosOrdem(&((*raiz)->dir));
        printf("%d ", (*raiz)->data);
    }
}

// M�todo Bidimensional
void printTree(no *aux, int espaco) {
    if (aux == NULL) {
        return;
    }

    // Aumenta o espa�amento entre n�veis
    espaco += 5;

    // Processa o n� da direita
    printTree(aux->esq, espaco);

    // Imprime o n� atual com espa�amento
    printf("\n");
    for (int i = 5; i < espaco; i++) {
        printf(" ");
    }
    printf("%d\n", aux->data);

    // Processa o n� da esquerda
    printTree(aux->dir, espaco);
}


// Menu de sele��o de m�todo
void imprimirArvore(ArvBin *raiz, int altura) {
    int running = 1;

    while (running == 1) {
        char input[10], *endInput;
        int selector;

        printf("==================================== M�TODO DE IMPRESS�O ===================================\n");
        printf("1 - Em Ordem\n");
        printf("2 - Pr�-Ordem\n");
        printf("3 - P�s-Ordem\n");
        printf("4 - Bidimensional\n");
        printf("0 - Voltar\n\n");
        printf("Selecione o m�todo desejado:\n");
        fgets(input, sizeof(input), stdin);

        selector = (int) strtol(input, &endInput, 10);
        if (*endInput != '\0' && *endInput != '\n') {
            printf("Entrada inv�lida. Digite um n�mero.\n");
            sleep(2);
            continue;
        }

        system("cls");

        switch (selector) {
            // M�todo em Ordem
            case 1:
                system("cls");
                imprimirArvoreEmOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // M�todo Pr�-Ordem
            case 2:
                system("cls");
                imprimirArvorePreOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // M�todo P�s-Ordem
            case 3:
                system("cls");
                imprimirArvorePosOrdem(raiz);
                sleep(4);
                system("cls");
                break;

                // M�todo P�s-Ordem
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

                // Case de op��o inv�lida
            default:
                printf("Op��o inv�lida!");
                sleep(2);
                break;
        }
    }
}