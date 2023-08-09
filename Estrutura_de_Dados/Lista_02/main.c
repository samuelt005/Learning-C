#include <stdio.h>
#include <locale.h>

#define E_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
//um deles. Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada
//vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a
//modifica��o. 1
void Exercicio1() {
    int umInteiro = 20, *ptrInteiro;
    double umReal = 74.49, *ptrReal;
    char umChar = 'y', *ptrChar;

    ptrInteiro = &umInteiro;
    ptrReal = &umReal;
    ptrChar = &umChar;

    printf("Valores atu�is:\n");
    printf("%d\n", *ptrInteiro);
    printf("%f\n", *ptrReal);
    printf("%c\n\n", *ptrChar);

    printf("Insira um n�mero inteiro:\n");
    scanf("%d", ptrInteiro);
    limpaBuffer();
    printf("Insira um n�mero real:\n");
    scanf("%lf", ptrReal);
    limpaBuffer();
    printf("Insira apenas um caractere:\n");
    scanf("%c", ptrChar);
    limpaBuffer();

    printf("Valores novos:\n");
    printf("%d\n", *ptrInteiro);
    printf("%f\n", *ptrReal);
    printf("%c\n", *ptrChar);
}


//Escreva um programa que contenha duas vari�veis inteiras. Compare o endere�o de
//ambas e exiba o maior.
void Exercicio2() {
    int var1, *ptrVar1, var2, *ptrVar2;
    ptrVar1 = &var1;
    ptrVar2 = &var2;

    printf("Insira um n�mero inteiro:\n");
    scanf("%d", ptrVar1);
    limpaBuffer();
    printf("Insira outro n�mero inteiro:\n");
    scanf("%d", ptrVar2);
    limpaBuffer();

    if (*ptrVar1 > *ptrVar2) {
        printf("O n�mero %d � maior que %d", *ptrVar1, *ptrVar2);
    } else if (*ptrVar1 < *ptrVar2) {
        printf("O n�mero %d � maior que %d", *ptrVar2, *ptrVar1);
    } else if (*ptrVar1 == *ptrVar2) {
        printf("O dois n�meros s�o iguais");
    }
}


//Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
//teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o.
void Exercicio3() {
    int var1, *ptrVar1, var2, *ptrVar2;
    ptrVar1 = &var1;
    ptrVar2 = &var2;

    printf("Insira um n�mero inteiro:\n");
    scanf("%d", ptrVar1);
    limpaBuffer();
    printf("Insira outro n�mero inteiro:\n");
    scanf("%d", ptrVar2);
    limpaBuffer();

    if (*ptrVar1 > *ptrVar2) {
        printf("O n�mero %d � maior que %d", *ptrVar1, *ptrVar2);
    } else if (*ptrVar1 < *ptrVar2) {
        printf("O n�mero %d � maior que %d", *ptrVar2, *ptrVar1);
    } else if (*ptrVar1 == *ptrVar2) {
        printf("O dois n�meros s�o iguais");
    }
}

//Crie um programa que contenha uma fun��o que permita passar por par�metro dois
//n�meros inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros e
//armazenar o resultado na vari�vel A. Esta fun��o n�o dever� possuir retorno, mas dever�
//modificar o valor do primeiro par�metro. Imprima os valores atualizados de A e B na
//fun��o principal.
void somaValores(int *valorA, int valorB) { //Recebe o endere�o de A e uma c�pia do valor B
    *valorA += valorB;
}

void Exercicio4() {
    int varA, *ptrVarA, varB, *ptrVarB;
    ptrVarA = &varA;
    ptrVarB = &varB;

    printf("Insira um n�mero inteiro:\n");
    scanf("%d", ptrVarA);
    limpaBuffer();
    printf("Insira outro n�mero inteiro:\n");
    scanf("%d", ptrVarB);
    limpaBuffer();

    somaValores(ptrVarA, *ptrVarB); //Envia o endere�o de varA e envia uma c�pia do conte�do apontado para varB

    printf("A soma dos valores �: %d\n", *ptrVarA);
    printf("Valor de B �: %d\n", *ptrVarB);
}

//Fa�a uma fun��o chamada primo que recebe como par�metro um inteiro m e dois
//outros inteiros p1 e p2 passados por refer�ncia. A fun��o deve retornar em p1 o maior
//n�mero primo que � menor do que m e deve retornar em p2 o menor n�mero primo que �
//maior do que m.
void Exercicio5() {

}

//Escreva uma fun��o que dado um n�mero real passado como par�metro, retorne a
//parte inteira e a parte fracion�ria deste n�mero. Escreva um programa que chama esta
//fun��o.
//Prot�tipo:
//void frac(float num, int* inteiro, float* frac);
void Exercicio6() {

}

//Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de
//raio R. Essa fun��o deve obedecer ao prot�tipo:
//void calc_esfera(float R, float *area, float *volume)
//A �rea da superf�cie e o volume s�o dados, respectivamente, por:
//A = 4 * pi * R2
//V = 4/3 * pi * R3
void calc_esfera(float raio, float *area, float *volume) {
    *area = 4 * E_PI * (raio * raio);
    *volume = 4 / 3 * E_PI * (raio * raio * raio);
}

void Exercicio7() {
    float raio, area, volume;

    printf("Digite o raio da esfera:\n");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("A �rea da superf�cie da esfera �: %f\n", area);
    printf("O volume da esfera �: %f\n", volume);
}

//Desenvolva um programa que leia a quantidade total de segundos e converta para
//Horas, Minutos e Segundos. Imprima o resultado da convers�o no formato HH:MM:SS.
//Para isso, utilize a fun��o com prot�tipo:
//void converteHora(int total_segundos, int *hora, int *min, int *seg)
void converteHora(int totalSegundos, int *hora, int *min, int *seg) {
    while (totalSegundos > 3600) {
        totalSegundos -= 3600;
        (*hora)++;
    }
    while (totalSegundos > 60) {
        totalSegundos -= 60;
        (*min)++;
    }
    *seg = totalSegundos;
}

void Exercicio8() {
    int totalSegundos, hora, min, seg;

    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &totalSegundos);

    converteHora(totalSegundos, &hora, &min, &seg);

    printf("Quantidade de horas: %d\n", hora);
    printf("Quantidade de minutos: %d\n", min);
    printf("Quantidade de segundos: %d\n", seg);
    printf("%d:%d:%d\n", hora, min, seg);
}

//Main
int main() {
    setlocale(LC_ALL,"");
    int running = 1;

    while (running == 1) {
        int selecao = 0;
        printf("Digite o n�mero do exerc�cio que deseja resolver (1 a 8):");
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
            default:
                return running = 0;
        }
    }
}
