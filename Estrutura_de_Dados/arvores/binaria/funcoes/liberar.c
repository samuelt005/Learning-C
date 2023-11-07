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