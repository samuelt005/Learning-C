#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exemplo1() {
    char *x;

    //malloc e calloc permite alterar o tamanho dinâmicamente das variáveis
    //x = malloc(sizeof(int)); //Recebe apenas um elemento e o tamanho de alocação de memória
    x = calloc(1, sizeof(char)); //Recebe um ou mais elementos e o tamanho de alocação de memória de cada elemento

    if(x) {
        printf("Memória alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    } else {
        printf("Erro ao alocar memória!\n");
    }
}

void exemplo2() {
    int tam, *vet;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(sizeof(int) * tam);

    if(vet) {
        printf("Memória alocada com sucesso!\n");
        for (int i = 0; i < tam; ++i) {
            *(vet + i) = rand() % 100;
        }
        for (int i = 0; i < tam; ++i) {
            printf("%d ", *(vet + i));
        }
        printf("\n");
    } else {
        printf("Erro ao alocar memória!\n");
    }
}

//
void Exercicio1() {
    int tam, *vet;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if(vet) {
        int totalPares = 0, totalImpares = 0;
        printf("Memória alocada com sucesso!\n");
        for (int i = 0; i < tam; ++i) {
            printf("Insira o valor do item de posição %d:\n", i);
            scanf("%d", vet + i);
        }
        printf("Dados inseridos:\n");
        for (int i = 0; i < tam; ++i) {
            printf("%d ", *(vet + i));
        }
        for (int i = 0; i < tam; ++i) {
            if (*(vet + i) % 2 == 0) {
                totalPares++;
            } else {
                totalImpares++;
            }
        }
        printf("\n");
        printf("Total de números pares: %d\n", totalPares);
        printf("Total de números pares: %d\n", totalImpares);
        printf("\n");
    } else {
        printf("Erro ao alocar memória!\n");
    }
}


//
void Exercicio2() {

}


//
void Exercicio3() {

}

//
void Exercicio4() {

}

//
void Exercicio5() {

}

//
void Exercicio6() {

}

//
void Exercicio7() {

}

//
void Exercicio8() {

}

//
void Exercicio9() {

}

//Main
int main() {
    setlocale(LC_ALL,"");
    int running = 1;

    while (running == 1) {
        int selecao = 0;
        printf("Digite o número do exercício que deseja resolver (1 a 9):");
        scanf("%i", &selecao);

        switch (selecao) {
            case 1:
                Exercicio1();
                break;
            case 2:
                Exercicio2();
                break;
            case 3:
                Exercicio3();
                break;
            case 4:
                Exercicio4();
                break;
            case 5:
                Exercicio5();
                break;
            case 6:
                Exercicio6();
                break;
            case 7:
                Exercicio7();
                break;
            case 8:
                Exercicio8();
                break;
            case 9:
                Exercicio9();
                break;
            default:
                return running = 0;
        }
    }
}
