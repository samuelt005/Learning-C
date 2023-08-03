#include <stdio.h>
#include <locale.h>


//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
void Exercicio1() {

}


//Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x Elevado a n.
void Exercicio2() {

}


//Usando recursividade, calcule a soma de todos os valores de um vetor de tamanho definido pelo usuário de reais.
void Exercicio3() {

}

//A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo MultipRec(n1,n2) que calcule a multiplicação de dois inteiros.
void Exercicio4() {

}

//Escreva uma função recursiva que calcule o número de grupos distintos com k pessoas que podem ser formados a partir de um conjunto de n pessoas. A definição abaixo da função Comb(n,k) define as regras:
void Exercicio5() {

}

//
void Exercicio6() {

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
