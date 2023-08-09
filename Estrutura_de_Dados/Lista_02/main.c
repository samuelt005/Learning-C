#include <stdio.h>
#include <locale.h>

#define E_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
//um deles. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
//variável usando os ponteiros. Imprima os valores das variáveis antes e após a
//modificação. 1
void Exercicio1() {
    int umInteiro = 20, *ptrInteiro;
    double umReal = 74.49, *ptrReal;
    char umChar = 'y', *ptrChar;

    ptrInteiro = &umInteiro;
    ptrReal = &umReal;
    ptrChar = &umChar;

    printf("Valores atuáis:\n");
    printf("%d\n", *ptrInteiro);
    printf("%f\n", *ptrReal);
    printf("%c\n\n", *ptrChar);

    printf("Insira um número inteiro:\n");
    scanf("%d", ptrInteiro);
    limpaBuffer();
    printf("Insira um número real:\n");
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


//Escreva um programa que contenha duas variáveis inteiras. Compare o endereço de
//ambas e exiba o maior.
void Exercicio2() {
    int var1, *ptrVar1, var2, *ptrVar2;
    ptrVar1 = &var1;
    ptrVar2 = &var2;

    printf("Insira um número inteiro:\n");
    scanf("%d", ptrVar1);
    limpaBuffer();
    printf("Insira outro número inteiro:\n");
    scanf("%d", ptrVar2);
    limpaBuffer();

    if (*ptrVar1 > *ptrVar2) {
        printf("O número %d é maior que %d", *ptrVar1, *ptrVar2);
    } else if (*ptrVar1 < *ptrVar2) {
        printf("O número %d é maior que %d", *ptrVar2, *ptrVar1);
    } else if (*ptrVar1 == *ptrVar2) {
        printf("O dois números são iguais");
    }
}


//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
void Exercicio3() {
    int var1, *ptrVar1, var2, *ptrVar2;
    ptrVar1 = &var1;
    ptrVar2 = &var2;

    printf("Insira um número inteiro:\n");
    scanf("%d", ptrVar1);
    limpaBuffer();
    printf("Insira outro número inteiro:\n");
    scanf("%d", ptrVar2);
    limpaBuffer();

    if (*ptrVar1 > *ptrVar2) {
        printf("O número %d é maior que %d", *ptrVar1, *ptrVar2);
    } else if (*ptrVar1 < *ptrVar2) {
        printf("O número %d é maior que %d", *ptrVar2, *ptrVar1);
    } else if (*ptrVar1 == *ptrVar2) {
        printf("O dois números são iguais");
    }
}

//Crie um programa que contenha uma função que permita passar por parâmetro dois
//números inteiros A e B. A função deverá calcular a soma entre estes dois números e
//armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
//modificar o valor do primeiro parâmetro. Imprima os valores atualizados de A e B na
//função principal.
void somaValores(int *valorA, int valorB) { //Recebe o endereço de A e uma cópia do valor B
    *valorA += valorB;
}

void Exercicio4() {
    int varA, *ptrVarA, varB, *ptrVarB;
    ptrVarA = &varA;
    ptrVarB = &varB;

    printf("Insira um número inteiro:\n");
    scanf("%d", ptrVarA);
    limpaBuffer();
    printf("Insira outro número inteiro:\n");
    scanf("%d", ptrVarB);
    limpaBuffer();

    somaValores(ptrVarA, *ptrVarB); //Envia o endereço de varA e envia uma cópia do conteúdo apontado para varB

    printf("A soma dos valores é: %d\n", *ptrVarA);
    printf("Valor de B é: %d\n", *ptrVarB);
}

//Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois
//outros inteiros p1 e p2 passados por referência. A função deve retornar em p1 o maior
//número primo que é menor do que m e deve retornar em p2 o menor número primo que é
//maior do que m.
void Exercicio5() {

}

//Escreva uma função que dado um número real passado como parâmetro, retorne a
//parte inteira e a parte fracionária deste número. Escreva um programa que chama esta
//função.
//Protótipo:
//void frac(float num, int* inteiro, float* frac);
void Exercicio6() {

}

//Implemente uma função que calcule a área da superfície e o volume de uma esfera de
//raio R. Essa função deve obedecer ao protótipo:
//void calc_esfera(float R, float *area, float *volume)
//A área da superfície e o volume são dados, respectivamente, por:
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

    printf("A área da superfície da esfera é: %f\n", area);
    printf("O volume da esfera é: %f\n", volume);
}

//Desenvolva um programa que leia a quantidade total de segundos e converta para
//Horas, Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS.
//Para isso, utilize a função com protótipo:
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
        printf("Digite o número do exercício que deseja resolver (1 a 8):");
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
