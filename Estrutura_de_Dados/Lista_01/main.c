#include <stdio.h>
#include <locale.h>


//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
int SomaDeGauss(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n + SomaDeGauss(n - 1));
    }
}

void Exercicio1() {
    int numero;

    printf("Soma de Gauss!\n");
    printf("Digite um número inteiro que deseja efetuar a soma de Gauss:");
    scanf("%i", &numero);

    printf("Resultado: %i\n", SomaDeGauss(numero));
}


//Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x Elevado a n.
int Elevado(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return (x * Elevado(x, n - 1));
    }
}

void Exercicio2() {
    int numero, expoente;

    printf("Potenciação!\n");
    printf("Digite um número inteiro que deseja efetuar a potenciação:");
    scanf("%i", &numero);
    printf("Digite o expoente:");
    scanf("%i", &expoente);

    printf("Resultado: %i\n", Elevado(numero, expoente));
}


//Usando recursividade, calcule a soma de todos os valores de um vetor de tamanho definido pelo usuário de reais.
double SomaVetor(double vetor[], int i) {
    if (i == 0) {
        return 0;
    } else {
        return (vetor[i - 1] + SomaVetor(vetor, i - 1));
    }
}

void Exercicio3() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    double vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento da posição %i do vetor: ", i);
        scanf("%lf", &vetor[i]);
    }

    printf("A soma dos elementos do vetor é: %.2lf\n", SomaVetor(vetor, tamanho));
}

//A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo MultipRec(n1,n2) que calcule a multiplicação de dois inteiros.
int MultipRec(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    } else {
        return (n1 + MultipRec(n1, n2 - 1));
    }
}

void Exercicio4() {
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Resultado da multiplicação de %d x %d 4= %d\n", n1, n2, MultipRec(n1, n2));
}

//Escreva uma função recursiva que calcule o número de grupos distintos com k pessoas que podem ser formados a partir de um conjunto de n pessoas. A definição abaixo da função Comb(n,k) define as regras:
int Comb(int k, int n) {
    if (k > n) {
        printf("Quantidade de grupos é maior que quantidade de pessoas!\n");
        return 1;
    }
    if (k == 1) {
        return n;
    } else if (k == n) {
        return 1;
    } else {
        return (Comb(n - 1, k - 1) + Comb(n - 1, k));
    }
}

void Exercicio5() {
    int k, n;

    printf("Digite a quantidade de grupos distintos: ");
    scanf("%i", &k);
    printf("Digite a quantidade de pessoas: ");
    scanf("%i", &n);

    printf("Resultado: %i\n", Comb(k, n));
}

//Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6
int SomaDecomposicao(int i) {
    if (i < 10) {
        return i;
    } else {
        return (i % 10 + SomaDecomposicao(i / 10));
    }
}

void Exercicio6() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("A soma dos dígitos é: %d\n", SomaDecomposicao(numero));
}

//Main
int main() {
    setlocale(LC_ALL,"");
    int running = 1;

    while (running == 1) {
        int selecao = 0;
        printf("Digite o número do exercício que deseja resolver (1 a 6):");
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
            default:
                return running = 0;
        }
    }
}
