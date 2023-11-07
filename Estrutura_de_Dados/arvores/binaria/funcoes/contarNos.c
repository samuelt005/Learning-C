
int contarNo(no *no_liberar) {
    if (no_liberar == NULL) {
        return 0;
    } else {
        int cont_esq = contarNo(no_liberar->esq);
        int cont_dir = contarNo(no_liberar->dir);
        return 1 + cont_esq + cont_dir;
    }
}

int contarArvore(ArvBin *raiz) {
    if (raiz == NULL) {
        printf("Não há dados para contar!");
        sleep(2);
        return 0;
    } else {
        int contador = contarNo(*raiz);
        return contador;
    }
}
