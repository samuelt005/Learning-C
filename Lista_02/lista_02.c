#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//1.  Faða um algoritmo que leia dois valores A e B e imprima o maior deles. 
    void questao01(){
        float a, b;

        printf("Insira o primeiro nðmero: ");
        scanf("%f", &a);
        printf("Insira o segundo nðmero: ");
        scanf("%f", &b);

        if (a > b)
        {
            printf("O nðmero %.2f ð maior", a);
        } else {
            printf("O nðmero %.2f ð maior", b);
        }
        
return;
}

//2.  Faða um algoritmo para receber um nðmero qualquer e informar na tela se ð par ou ððmpar.
    void questao02() {
        int numero;

        printf("Insira um nðmero qualquer: ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            printf("O nðmero e par");
        } else {
            printf("O nðmero e ðmpar");
        }
        
return;
}

//3.  Faða um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverð se somar os dois, caso contrðrio multiplique A por B. Ao final, apresente o resultado. 
    void questao03() {
        int a, b;

        printf("Insira o primeiro nðmero: ");
        scanf("%i", &a);
        printf("Insira o segundo nðmero: ");
        scanf("%i", &b);

        if (a == b)
        {
            printf("O valor ð: %i", a + b);
        } else {
            printf("O valor ð: %i", a * b);
        }
        
return;
}

//4.  Encontrar o dobro de um numeraððo caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado. 
    void questao04() {
        int numero;

        printf("Insira um nðmero inteiro positivo ou negativo: ");
        scanf("%i", &numero);

        if (numero > 0)
        {
            numero *= 2;
            printf("O nðmero ð positivo e seu dobro ð: %i", numero);
        } else {
            numero *= 3;
            printf("O nðmero ð negativo e seu triplo ð: %i", numero);
        }
        
        
return;
}

//5.  Faða um algoritmo que leia uma variðvel e some 5 caso seja par ou some 8 caso seja ðmpar, imprimir o resultado desta operaððo.
    void questao05() {
        int numero;

        printf("Insira um nðmero qualquer: ");
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

//6.  Escreva um algoritmo que leia trðs valores inteiros e diferentes e mostre-os em ordem decrescente. 
    void questao06() {
        int a, b, c, temp;

        printf("Insira 3 nðmeros (separado por espaðo) inteiros e diferentes: ");
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

        printf("Nðmeros em ordem: %i -> %i -> %i", a, b, c);

return;
}

//7. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fðrmulas: 
//para homens: (72.7 * h) - 58; 
//para mulheres: (62.1 * h) - 44.7. 
    void questao07() {
        float h, pesoIdeal;
        char sexo;

        printf("Insira sua altura: ");
        scanf("%f", &h);
        
        getchar(); // limpa o buffer de entrada. Ao chamar a funððo getchar(), vocð estð lendo um caractere do buffer de entrada, o que remove o caractere residual que poderia estar lð apðs a entrada da altura.

        printf("Selecione seu sexo (M/F): ");
        //fflush(stdin); Limpa todo o buffer
        scanf("%c", &sexo);
        printf("O valor lido para sexo ð '%c'\n", sexo);

        if (sexo == 'M' || sexo == 'm') {
            pesoIdeal = (72.7 * h) - 58;
            printf("Vocð ð homem e seu peso ideal ð: %.2f Kg", pesoIdeal);
        }
        else if (sexo == 'F' || sexo == 'f') {
            pesoIdeal = (62.1 * h) - 44.7;
            printf("Vocð ð mulher e seu peso ideal ð: %.2f Kg", pesoIdeal);
        } else {
            printf("Sexo desconhecido!");
        }

return;
}

//
    void questao08() {

return;
}

//Escreva um algoritmo que leia o nðmero de identificaððo do aluno, 3 notas obtidas e calcule a mðdia aritmð-tica obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperaððo ou foi reprovado por nota.
    void questao09() {
        float nota1, nota2, nota3, media;
        int idAluno;

        //Input das notas
        printf("Insira o nðmero de identificaððo do aluno: ");
        scanf("%i", &idAluno);
        printf("Insira o valor da primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira o valor da segunda nota: ");
        scanf("%f", &nota2);
        printf("Insira o valor da terceira nota: ");
        scanf("%f", &nota3);

        //Cðlculo da mðdia
        media = (nota1 + nota2 + nota3)/3;

        //Verificador da mðdia
        if (media >= 7) {
            printf("Aluno nð %.0i, nðo fez mais que sua obrigaððo!", idAluno); 
            } else {
                if (media >= 4, media < 7) {
                    printf("Aluno nð %.0i, vocð estð de recuperaððo!", idAluno); 
                } else {
                    printf("Aluno nð %.0i, vocð estð reprovado, noob!!!", idAluno); 
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

        printf("insira um nðmero de 0 a 3: ");
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
            printf("Trðs");
            break;

        default:
            printf("What?");
            break;
        }

return;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("olð");
    while (1)
    {
        int i, selecao;    
        void (*questao[18])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15, questao16, questao17, questao18};

        printf ("\nDigite o numero da questao (de 1 a 18): ");
        scanf("%d", &selecao);

        for (i = 0; i < 18; i++) {
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
