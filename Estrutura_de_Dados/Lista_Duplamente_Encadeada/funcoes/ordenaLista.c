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
                    aux = tmp->num; // Atribui o número atual para a variável auxiliar
                    tmp->num = tmp->prox->num; // Atribui o número do próximo para o atual
                    tmp->prox->num = aux; // Atribui o salvo no aux para o próximo número
                    flag++; // Se entrar na condição adiciona valor na flag
                }
                tmp = tmp->prox; // Passa o endereço atual para o próximo da lista
            }
        } while (flag != 0);
        printf("Lista ordenada!");
    }
}