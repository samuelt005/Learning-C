#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
void questao01() {
    int vetor1[10], vetor2[10], vetorResultado[10];

    printf("Digite os elementos do vetor1:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor2:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

return;
}

/*2. Crie um programa que leia um vetor de 20 posições e informe:
a. Quantos números pares existem no vetor
b. Quantos números ímpares existem no vetor
c. Quantos números maiores do que 50
d. Quantos números menores do que 7 */
void questao02() {
    int vetor[20];
    int pares = 0, impares = 0, maiores50 = 0, menores7 = 0;

    printf("Digite 20 numeros separados por enter:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (vetor[i] > 50) {
            maiores50++;
        }

        if (vetor[i] < 7) {
            menores7++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Quantidade de numeros maiores que 50: %d\n", maiores50);
    printf("Quantidade de numeros menores que 7: %d\n", menores7);

return;
}

//3. Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2.
void questao03() {
    int vetorA[8], vetorB[8];

    printf("Digite 8 numeros separados por enter:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 8; i++) {
        vetorB[i] = vetorA[i] * 2;
    }

    printf("numeros multiplicados por 2:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\n", vetorB[i]);
    }
    printf("\n");
}

/*4. Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i]. */
void questao04() {
    int vetorA[10], vetorB[10], vetorC[10];

    printf("Digite 10 numeros separados por enter:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Agora digite novamente mais 10 numeros separados por enter:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    // Exibindo o vetorC
    printf("Soma do vetorA e vetorB:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");
}

/*5. Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva: 
a. a soma de elementos armazenados neste vetor que são inferiores a 15;
b. a quantidade de elementos armazenados no vetor que são iguais a 15; 
c. a média dos elementos armazenados no vetor que são superiores a 15. */
void questao05() {
    int vetorA[10];
    int somaMenores15 = 0, quantidadeIguais15 = 0, somaMaiores15 = 0, quantidadeMaiores15 = 0;
    float mediaMaiores15 = 0;

    printf("Digite 10 numeros inteiros separados por enter:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetorA[i] < 15) {
            somaMenores15 += vetorA[i];
        }
        
        if (vetorA[i] == 15) {
            quantidadeIguais15++;
        }

        if (vetorA[i] > 15) {
            somaMaiores15 += vetorA[i];
            quantidadeMaiores15++;
        }
    }

    if (quantidadeMaiores15 > 0) {
        mediaMaiores15 = somaMaiores15 / quantidadeMaiores15;
    }

    printf("Soma de elementos menores que 15: %d\n", somaMenores15);
    printf("Quantidade de elementos iguais a 15: %d\n", quantidadeIguais15);
    printf("Média dos elementos maiores que 15: %.2f\n", mediaMaiores15);
}

//6. Ler um vetor A com 10 elementos inteiros correspondentes às idades de um grupo de pessoas. Escreva um programa que determine e escreva a menor e a maior idades e suas respectivas posições.
void questao06() {
    int vetorA[10];
    int menorIdade, maiorIdade, posicaoMenor, posicaoMaior;

    // Lendo as idades do vetorA
    printf("Digite 10 idades separadas por enter:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    menorIdade = vetorA[0];
    maiorIdade = vetorA[0];
    posicaoMenor = 0;
    posicaoMaior = 0;

    for (int i = 1; i < 10; i++) {
        if (vetorA[i] < menorIdade) {
            menorIdade = vetorA[i];
            posicaoMenor = i;
        }

        if (vetorA[i] > maiorIdade) {
            maiorIdade = vetorA[i];
            posicaoMaior = i;
        }
    }

    printf("Menor idade: %d, Posicao: %d\n", menorIdade, posicaoMenor);
    printf("Maior idade: %d, Posicao: %d\n", maiorIdade, posicaoMaior);
}

//7. Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.
void questao07() {
    int vetor[10];
    int numeroImpar = 1;

    for (int i = 0; i < 10; i++) {
        vetor[i] = numeroImpar;
        numeroImpar += 2;
    }

    printf("10 primeiros numeros impares:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


//8. Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.
void questao08() {
    int vetor[16];
    int aux;

    printf("Digite 16 numeros inteiros separados por enter:\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 8; i++) {
        aux = vetor[i];
        vetor[i] = vetor[i + 8];
        vetor[i + 8] = aux;
    }

    printf("8 primeiros valores trocados pelos 8 ultimos e vice-e-versa:\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

//9.  Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa deverá fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
void questao09() {
    int vetor[20];
    int valor, posicao = -1;

    printf("Digite 20 numeros separados por enter:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor inserido anteriormente qualquer:\n");
    scanf("%d", &valor);

    for (int i = 0; i < 20; i++) {
        if (vetor[i] == valor) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O valor foi encontrado na posicao %d.\n", posicao);
    } else {
        printf("O valor nao foi encontrado no vetor.\n");
    }
}

//10. Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui
void questao10() {
    int vetor[40];
    int quantPares = 0;

    printf("Digite 40 numeros separados por enter:\n");
    for (int i = 0; i < 40; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 40; i++) {
        if (vetor[i] % 2 == 0) {
            quantPares++;
        }
    }

    printf("Quantidade de valores pares: %d\n", quantPares);
}

int main() {
    while (1)
    {
        int i, selecao;    
        void (*questao[15])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10};

        printf ("\nDigite o numero da questao (de 1 a 10): ");
        scanf("%d", &selecao);

        for (i = 0; i < 40; i++) {
            if (selecao == i + 1) {
                (*questao[i])();
                break;
            }// else {
             //    printf("Questao nao existe!");
             //    break;
             //}
        }
    }
}
