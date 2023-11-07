
int alturaArvore(no *aux) {
    if (aux == NULL) {
        return 0;
    }
    int alturaEsq = 1 + alturaArvore(aux->esq);
    int alturaDir = 1 + alturaArvore(aux->esq);
    if (alturaEsq > alturaDir) {
        return alturaEsq;
    } else {
        return alturaDir;
    }
}