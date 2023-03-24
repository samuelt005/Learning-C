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
        int a, b, c, temp;

        printf("Insira 3 números (separado por espaço) inteiros e diferentes: ");
        scanf("%i %i %i", &a, &b, &c);

        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        };
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        };
        if (b > a) {
            temp = b;
            b = a;
            a = temp;
        }

        printf("Números em ordem: %i -> %i -> %i", a, b, c);

return;
}

//7. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
//para homens: (72.7 * h) - 58; 
//para mulheres: (62.1 * h) - 44.7. 
    void questao07() {
        float h, pesoIdeal;
        char sexo;

        printf("Insira sua altura: ");
        scanf("%f", &h);
        
        getchar(); // limpa o buffer de entrada. Ao chamar a função getchar(), você está lendo um caractere do buffer de entrada, o que remove o caractere residual que poderia estar lá após a entrada da altura.

        printf("Selecione seu sexo (M/F): ");
        //fflush(stdin); Limpa todo o buffer
        scanf("%c", &sexo);
        printf("O valor lido para sexo é '%c'\n", sexo);

        if (sexo == 'M' || sexo == 'm') {
            pesoIdeal = (72.7 * h) - 58;
            printf("Você é homem e seu peso ideal é: %.2f Kg", pesoIdeal);
        }
        else if (sexo == 'F' || sexo == 'f') {
            pesoIdeal = (62.1 * h) - 44.7;
            printf("Você é mulher e seu peso ideal é: %.2f Kg", pesoIdeal);
        } else {
            printf("Sexo desconhecido!");
        }

return;
}

//
    void questao08() {

return;
}

//Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmé-tica obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por nota.
    void questao09() {
        float nota1, nota2, nota3, media;
        int idAluno;

        //Input das notas
        printf("Insira o número de identificação do aluno: ");
        scanf("%i", &idAluno);
        printf("Insira o valor da primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira o valor da segunda nota: ");
        scanf("%f", &nota2);
        printf("Insira o valor da terceira nota: ");
        scanf("%f", &nota3);

        //Cálculo da média
        media = (nota1 + nota2 + nota3)/3;

        //Verificador da média
        if (media >= 7) {
            printf("Aluno nº %.0i, não fez mais que sua obrigação!", idAluno); 
            } else {
                if (media >= 4, media < 7) {
                    printf("Aluno nº %.0i, você está de recuperação!", idAluno); 
                } else {
                    printf("Aluno nº %.0i, você está reprovado, noob!!!", idAluno); 
                }
            };

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

//Switch Case
    void questao18() {
        int num = 0;

        printf("insira um número de 0 a 3: ");
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Três");
            break;

        default:
            printf("What?");
            break;
        }

return;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("olá");
    while (1)
    {
        int i, selecao;    
        void (*questao[18])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15, questao16, questao17, questao18};

        printf ("\nDigite o número da questão (de 1 a 18): ");
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
