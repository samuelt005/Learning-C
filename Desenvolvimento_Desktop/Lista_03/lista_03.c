#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Leia o nome do usuário e escreva o nome dele na tela 10 vezes.
    void questao01(){
        char nome[40];

        printf("Insira seu nome: ");
        scanf("%s", nome);

        for (int i = 0; i < 10; i++)
        {
            printf("%s\n", nome);
        }
        
        // OU
        // int contador = 0;
        // while (contador < 10) {
        //     printf("%s\n", nome);
        //     contador ++;
        // }

return;
}

//2. Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita: “Esta é a mensagem 1”, “Esta é a mensagem 2” ... “Esta é a mensagem 20” 
    void questao02() {
        int contador = 1;

        while (contador <= 20)
        {
            printf("Esta e a mensagem %i\n", contador);
            contador ++;
        }
return;
}

//3. Reescreva o algoritmo anterior para escrever a mensagem o número de vezes informado pelo usuário.
    void questao03() {
        int contador = 1, vezes;

        printf("insira um numero inteiro: ");
        scanf("%i", &vezes);

        while (contador <= vezes)
        {
            printf("Esta e a mensagem %i\n", contador);
            contador ++;
        }


return;
}

//4. Escreva um algoritmo que calcule o somatório dos números de 1 a 15. 
    void questao04() {
        int total = 0;

        for (int i = 0; i < 16; i++)
        {
            total += i;
            printf("%i", i);
            if (i < 15)
            {
                printf(" + ");
            }
            
        }

        printf(" = %i", total);

return;
}

//5. Escreva um algoritmo que leia 10 números do usuário e calcule a soma desses números 
    void questao05() {
        int soma;

        for (int i = 1; i < 11; i++)
        {
            int temp_soma = 0;
            printf("Insira o numero %i: ", i);
            scanf("%i", &temp_soma);
            soma += temp_soma;
        }

        printf("A soma de todos os numeros e: %i", soma);

return;
}

//6. Leia a idade de 20 pessoas e exiba a soma das idades.
    void questao06() {
        int soma;

        for (int i = 1; i < 21; i++)
        {
            int temp_soma = 0;
            printf("Insira o idade da pessoa %i: ", i);
            scanf("%i", &temp_soma);
            soma += temp_soma;
        }

        printf("A soma de todas as idades e: %i", soma);

return;
}

//7. Leia a idade de 20 pessoas e exiba a média das idades.
    void questao07() {
        int soma;

        for (int i = 1; i < 21; i++)
        {
            int temp_soma = 0;
            printf("Insira o idade da pessoa %i: ", i);
            scanf("%i", &temp_soma);
            soma += temp_soma;
        }
        soma = soma / 20;
        printf("A media de todas as idades e: %i", soma);

return;
}

//8. Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.
    void questao08() {
        int total_adultos = 0;

        for (int i = 1; i < 21; i++)
        {
            int idade;
            printf("Insira o idade da pessoa %i: ", i);
            scanf("%i", &idade);
            if (idade >= 18)
            {
                total_adultos ++;
            }
        }
        printf("A quantidade de adultos e: %i", total_adultos);

return;
}

//9. Leia a idade de 10 pessoas e exiba a idade da pessoa mais nova.
    void questao09() {
        int menor_idade = 200;

        for (int i = 1; i < 11; i++)
        {
            int idade;
            printf("Insira o idade da pessoa %i: ", i);
            scanf("%i", &idade);
            if (menor_idade > idade)
            {
                menor_idade = idade;
            }
        }

        printf("A idade mais baixa e: %i", menor_idade);
return;
}

//10. Crie um algoritmo leia um número do usuário e exiba a sua tabuada de multiplicação.
    void questao10() {
        int numero;
        printf("Insira um numero inteiro: ");
        scanf("%i", &numero);

        for (int i = 1; i < 11; i++)
        {
            int temp_numero;
            temp_numero = numero;
            temp_numero *= i;
            printf("%.i\n", temp_numero);
        }
        

return;
}

//11. Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são maiores do que 8.
    void questao11() {
        int numeros_maiores = 0;

        for (int i = 1; i < 21; i++)
        {
            int numero;
            printf("Insira o numero %i: ", i);
            scanf("%i", &numero);
            if (numero > 8)
            {
                numeros_maiores ++;
            }
        }
        printf("A quantidade de numeros maiores que 8 e: %i", numeros_maiores);

return;
}

//12. Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são pares.
    void questao12() {
        int numeros_pares = 0;

        for (int i = 1; i < 21; i++)
        {
            int numero;
            printf("Insira o numero %i: ", i);
            scanf("%i", &numero);
            if (numero % 2 == 0)
            {
                numeros_pares ++;
            }
        }
        printf("A quantidade de numeros pares e: %i", numeros_pares);

return;
}

//13. Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100.
    void questao13() {
        int zero_a_cem = 0;

        for (int i = 1; i < 21; i++)
        {
            int numero;
            printf("Insira o numero %i: ", i);
            scanf("%i", &numero);
            if (numero > 0 && numero < 100)
            {
                zero_a_cem ++;
            }
        }
        printf("A quantidade de numeros maiores que 0 e menores que 100 e: %i", zero_a_cem);

return;
}

//14. Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100, quantos estão entre 101 e 200 e quantos são maiores de 200. 
    void questao14() {
        int zero_a_cem = 0;
        int cem_a_duzentos = 0;
        int mais_de_duzentos = 0;

        for (int i = 1; i < 21; i++)
        {
            int numero;
            printf("Insira o numero %i: ", i);
            scanf("%i", &numero);
            if (numero > 0 && numero < 100)
            {
                zero_a_cem ++;
            };
            if (numero > 100 && numero < 200)
            {
                cem_a_duzentos ++;
            };
            if (numero > 200)
            {
                mais_de_duzentos ++;
            }

        }
        printf("A quantidade de numeros maiores que 0 e menores que 100 e: %i\n", zero_a_cem);
        printf("A quantidade de numeros maiores que 100 e menores que 200 e: %i\n", cem_a_duzentos);
        printf("A quantidade de numeros maiores que 200 e: %i\n", mais_de_duzentos);

return;
}

//15. Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses números. Encerre a execução quando um número negativo for digitado.
    void questao15() {
        int soma = 0;
        int numero = 0;
        
        do {
            soma += numero;
            printf("Insira um numero positivo (se enserir um numero negativo a soma sera encerrada): ");
            scanf("%i", &numero);
        } while (numero > 0);
        printf("Valor total: %i", soma);
return;
}

int main() {
    while (1)
    {
        int i, selecao;    
        void (*questao[15])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15};

        printf ("\nDigite o numero da questao (de 1 a 15): ");
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
