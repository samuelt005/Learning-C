#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//1.  Faça um algoritmo que leia dois valores A e B e imprima o maior deles. 
    void questao01(){
        float a, b;

        printf("Insira o primeiro número: ");
        scanf("%f", &a);
        printf("Insira o segundo número: ");
        scanf("%f", &b);

        if (a > b)
        {
            printf("O número %.2f é maior", a);
        } else {
            printf("O número %.2f é maior", b);
        }
        
return;
}

//2.  Faça um algoritmo para receber um número qualquer e informar na tela se é par ou í­mpar.
    void questao02() {
        int numero;

        printf("Insira um número qualquer: ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            printf("O número e par");
        } else {
            printf("O número e ímpar");
        }
        
return;
}

//3.  Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B. Ao final, apresente o resultado. 
    void questao03() {
        int a, b;

        printf("Insira o primeiro número: ");
        scanf("%i", &a);
        printf("Insira o segundo número: ");
        scanf("%i", &b);

        if (a == b)
        {
            printf("O valor é: %i", a + b);
        } else {
            printf("O valor é: %i", a * b);
        }
        
return;
}

//4.  Encontrar o dobro de um numeração caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado. 
    void questao04() {
        int numero;

        printf("Insira um número inteiro positivo ou negativo: ");
        scanf("%i", &numero);

        if (numero > 0)
        {
            numero *= 2;
            printf("O número é positivo e seu dobro é: %i", numero);
        } else {
            numero *= 3;
            printf("O número é negativo e seu triplo é: %i", numero);
        }
        
        
return;
}

//5.  Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.
    void questao05() {
        int numero;

        printf("Insira um número qualquer: ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            numero += 5;
            printf("%i", numero);
        } else {
            numero += 8;
            printf("%i", numero);
        }
        
return;
}

//6.  Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente. 
    void questao06() {
        int a, b, c;
        int r1, r2, r3;

        printf("Insira 3 números inteiros e diferentes: ");
        scanf("%i %i %i", &a, &b, &c);
        printf("%i %i %i", a, b, c);

        if(a > b, a > c) {
            a = r3;
        };
        if(a > b, a < c) {
            
        }
return;
}

//
    void questao07() {

return;
}

//
    void questao08() {

return;
}

//
    void questao09() {

return;
}

//
    void questao10() {

return;
}

//
    void questao11() {

return;
}

// 
    void questao12() {

return;
}

// 
    void questao13() {

return;
}

// 
    void questao14() {

return;
}

// 
    void questao15() {

return;
}

// 
    void questao16() {

return;
}

// 
    void questao17() {

return;
}



int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("olá");
    while (1)
    {
        int i, selecao;    
        void (*questao[17])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15, questao16, questao17};

        printf ("\nDigite o número da questão (de 1 a 17): ");
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
