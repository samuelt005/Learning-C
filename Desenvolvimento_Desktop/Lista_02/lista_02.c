#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//1.  Faca um algoritmo que leia dois valores A e B e imprima o maior deles. 
    void questao01(){
        float a, b;

        printf("Insira o primeiro numero: ");
        scanf("%f", &a);
        printf("Insira o segundo numero: ");
        scanf("%f", &b);

        if (a > b)
        {
            printf("O numero %.2f e maior", a);
        } else {
            printf("O numero %.2f e maior", b);
        }
        
return;
}

//2.  Faca um algoritmo para receber um numero qualquer e informar na tela se e par ou immpar.
    void questao02() {
        int numero;

        printf("Insira um numero qualquer: ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            printf("O numero e par");
        } else {
            printf("O numero e impar");
        }
        
return;
}

//3.  Faca um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera se somar os dois, caso contrario multiplique A por B. Ao final, apresente o resultado. 
    void questao03() {
        int a, b;

        printf("Insira o primeiro numero: ");
        scanf("%i", &a);
        printf("Insira o segundo numero: ");
        scanf("%i", &b);

        if (a == b)
        {
            printf("O valor e: %i", a + b);
        } else {
            printf("O valor e: %i", a * b);
        }
        
return;
}

//4.  Encontrar o dobro de um numeracao caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado. 
    void questao04() {
        int numero;

        printf("Insira um numero inteiro positivo ou negativo: ");
        scanf("%i", &numero);

        if (numero > 0)
        {
            numero *= 2;
            printf("O numero e positivo e seu dobro e: %i", numero);
        } else {
            numero *= 3;
            printf("O numero e negativo e seu triplo e: %i", numero);
        }
        
        
return;
}

//5.  Faca um algoritmo que leia uma variavel e some 5 caso seja par ou some 8 caso seja impar, imprimir o resultado desta operacao.
    void questao05() {
        int numero;

        printf("Insira um numero qualquer: ");
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

//6.  Escreva um algoritmo que leia tres valores inteiros e diferentes e mostre-os em ordem decrescente. 
    void questao06() {
        int a, b, c, temp;

        printf("Insira 3 numeros (separado por espaco) inteiros e diferentes: ");
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

        printf("numeros em ordem: %i -> %i -> %i", a, b, c);

return;
}

//7. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes formulas: 
//para homens: (72.7 * h) - 58; 
//para mulheres: (62.1 * h) - 44.7. 
    void questao07() {
        float h, pesoIdeal;
        char sexo;

        printf("Insira sua altura: ");
        scanf("%f", &h);
        
        getchar();

        printf("Selecione seu sexo (M/F): ");
        //fflush(stdin); Limpa todo o buffer
        scanf("%c", &sexo);
        printf("O valor lido para sexo e '%c'\n", sexo);

        if (sexo == 'M' || sexo == 'm') {
            pesoIdeal = (72.7 * h) - 58;
            printf("Voce e homem e seu peso ideal e: %.2f Kg", pesoIdeal);
        }
        else if (sexo == 'F' || sexo == 'f') {
            pesoIdeal = (62.1 * h) - 44.7;
            printf("Voce e mulher e seu peso ideal e: %.2f Kg", pesoIdeal);
        } else {
            printf("Sexo desconhecido!");
        }

return;
}

/*8.  Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado. 
Código Condição de pagamento 
a) À vista em dinheiro ou cheque, recebe 10% de desconto 
b) À vista no cartão de crédito, recebe 15% de desconto 
c) Em duas vezes, preço normal de etiqueta sem juros 
d) Em duas vezes, preço normal de etiqueta mais juros de 10% */
    void questao08() {
        float preco, valorFinal;
        char opcao;

        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        printf("Escolha a condicao de pagamento:\n");
        printf("a) A vista em dinheiro ou cheque com 10%% de desconto\n");
        printf("b) A vista no cartao de credito com 15%% de desconto\n");
        printf("c) Em duas vezes sem juros\n");
        printf("d) Em duas vezes com juros de 10%%\n");
        printf("Opcao escolhida: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                valorFinal = preco - (preco * 0.1);
                break;
            case 'b':
                valorFinal = preco - (preco * 0.15);
                break;
            case 'c':
                valorFinal = preco;
                break;
            case 'd':
                valorFinal = preco + (preco * 0.1);
                break;
            default:
                printf("Opcao invalida!\n");
                return 0;
        }

        printf("Valor a ser pago: %.2f\n", valorFinal);

return;
}

//9. Escreva um algoritmo que leia o numero de identificacao do aluno, 3 notas obtidas e calcule a media aritme-tica obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperacao ou foi reprovado por nota.
    void questao09() {
        float nota1, nota2, nota3, media;
        int idAluno;

        //Input das notas
        printf("Insira o numero de identificacao do aluno: ");
        scanf("%i", &idAluno);
        printf("Insira o valor da primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira o valor da segunda nota: ");
        scanf("%f", &nota2);
        printf("Insira o valor da terceira nota: ");
        scanf("%f", &nota3);

        //Calculo da media
        media = (nota1 + nota2 + nota3)/3;

        //Verificador da media
        if (media >= 7) {
            printf("Aluno numero %.0i, nao fez mais que sua obrigacao!", idAluno); 
            } else {
                if (media >= 4, media < 7) {
                    printf("Aluno numero %.0i, Voce esta de recuperacao!", idAluno); 
                } else {
                    printf("Aluno numero %.0i, Voce esta reprovado, noob!!!", idAluno); 
                }
            };

return;
}

//10. Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor.
    void questao10() {
        int num1, num2, diferenca;

        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        if (num1 > num2) {
            diferenca = num1 - num2;
        } else {
            diferenca = num2 - num1;
        }

        printf("Diferenca entre os numeros: %d\n", diferenca);

return;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Ola");
    while (1)
    {
        int i, selecao;    
        void (*questao[10])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10};

        printf ("\nDigite o numero da questao (de 1 a 10): ");
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
