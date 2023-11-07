#include "global.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int running = 1;

    ArvBin *raiz = criaArvBin();

    while (running == 1) {
        char input[10], *endInput;
        int selector;
        int altura;

        system("cls"); //Limpeza do terminal

        //Menu principal
        printf("==================================== MENU PRINCIPAL ===================================\n");
        printf("1 - Cadastrar na Árvore\n");
        printf("2 - Excluir da Árvore\n");
        printf("3 - Imprimir Árvore\n");
        printf("4 - Popular Árvore\n");
        printf("5 - Verificar Altura da Árvore\n");
        printf("6 - Contar Itens da Árvore\n");
        printf("0 - Sair\n\n");
        printf("Selecione a opção desejada:\n");
        fgets(input, sizeof(input), stdin);

        selector = (int) strtol(input, &endInput, 10);
        if (*endInput != '\0' && *endInput != '\n') {
            printf("Entrada inválida. Digite um número.\n");
            sleep(2);
            continue;
        }

        system("cls");

        switch (selector) {
                // Case para cadastrar na árvore binária
            case 1:
                system("cls");
                insereArvBin(raiz);
                system("cls");
                break;

                // Case para excluir nó da árvore binária
            case 2:
                system("cls");
                aExcluir(raiz);
                system("cls");
                break;

                // Case imprimir a árvore binária
            case 3:
                system("cls");
                altura = alturaArvore(*raiz);
                imprimirArvore(raiz, altura);
                sleep(2);
                system("cls");
                break;

                // Case para popular a árvore binária
            case 4:
                system("cls");
                geraDados(raiz);
                system("cls");
                break;

                // Case para determinar a altura da árvore
            case 5:
                system("cls");
                altura = alturaArvore(*raiz);
                printf("Altura da árvore: %d", altura);
                sleep(2);
                system("cls");
                break;

                // Case para determinar a altura da árvore
            case 6:
                system("cls");
                int qtdNos = contarArvore(raiz);
                printf("Quantidade de itens: %d", qtdNos);
                sleep(2);
                system("cls");
                break;

                //Case para encerrar o programa
            case 0:
                printf("Saindo... volte sempre!");
                printf(" :)\n");
                sleep(2);
                liberaArvBin(raiz);
                running = 0;
                break;

                //Case de opção inválida
            default:
                printf("Opção inválida!");
                sleep(2);
                break;
        } //End Switch
    }
}
