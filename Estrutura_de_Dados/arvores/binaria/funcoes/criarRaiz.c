
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