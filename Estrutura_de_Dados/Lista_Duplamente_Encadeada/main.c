#include "global.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    LISTA* lista = criaLista();
    int op;
    do {
        printf("---------------- MENU ----------------\n");
        printf("1 - Inserir no início\n");
        printf("2 - Inserir no final\n");
        printf("3 - Exibir lista\n");
        printf("4 - Liberar lista\n");
        printf("5 - Ordenar lista\n");
        printf("6 - Remover primeiro item\n");
        printf("7 - Remover último item\n");
        printf("8 - Insere item no meio\n");
        printf("9 - Remover item específico\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                insereInicio(lista);
                sleep(2);
                system("cls");
                break;
            case 2:
                system("cls");
                insereFinal(lista);
                sleep(2);
                system("cls");
                break;
            case 3:
                system("cls");
                exibeLista(lista);
                opcaoRetorno();
                system("cls");
                break;
            case 4:
                system("cls");
                liberaLista(lista);
                sleep(2);
                system("cls");
                break;
            case 5:
                system("cls");
                ordenaLista(lista);
                sleep(2);
                system("cls");
                break;
            case 6:
                system("cls");
                removeInicio(lista);
                sleep(2);
                system("cls");
                break;
            case 7:
                system("cls");
                removeFinal(lista);
                sleep(2);
                system("cls");
                break;
            case 8:
                system("cls");
                insereMeio(lista);
                sleep(2);
                system("cls");
                break;
            case 9:
                system("cls");
                removeMeio(lista);
                sleep(2);
                system("cls");
                break;
            case 0:
                system("cls");
                op = 0;
                printf("Saindo!");
                sleep(2);
                break;
            default:
                system("cls");
                printf("Opção não cadastrada!");
                sleep(2);
                system("cls");
                break;
        }
    } while (op !=0);
    liberaLista(lista);
    free(lista);
}