#include "../global.h"

void ordenaLista(LISTA* lista) {
    if( (*lista) == NULL) {
        printf("Lista vazia!\n");
    } else {
        node *tmp;
        int aux, flag;
        do {
            flag = 0; // Flag para verificar se foi alterado algum dado na lista
            tmp = (*lista);
            while (tmp->prox != NULL) {
                if (tmp->num > tmp->prox->num) {
                    aux = tmp->num; // Atribui o n�mero atual para a vari�vel auxiliar
                    tmp->num = tmp->prox->num; // Atribui o n�mero do pr�ximo para o atual
                    tmp->prox->num = aux; // Atribui o salvo no aux para o pr�ximo n�mero
                    flag++; // Se entrar na condi��o adiciona valor na flag
                }
                tmp = tmp->prox; // Passa o endere�o atual para o pr�ximo da lista
            }
        } while (flag != 0);
        printf("Lista ordenada!");
    }
}