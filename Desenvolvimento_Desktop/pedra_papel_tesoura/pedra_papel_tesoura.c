#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

//Este código ficou bem simples. 
//Teria outras maneiras mais otimizadas de fazer o mesmo, e talvez seria bom colocar um teste para se o jogador informe um número maior que 3 ou menor que 0.

void sistemaDeVotacao()
{
    //Limpeza do terminal
    system("cls");

    //Definição das variáveis globais
    int opcaoJogador, opcaoComputador;

    //Jogo
    printf("Que comece o jogo!\n");
    printf("0 - Pedra\n1 - Papel\n2 - Tesoura\n");
    printf("Escolha uma opcao (nao se preocupe, o computador nao sabera o que voce vai escolher):\n");
    scanf("%i", &opcaoJogador);
    
    sleep(2);
    system("cls");
    // inicializa a semente para a função rand() usando a hora atual
    srand(time(NULL));

    // gera um número aleatório entre 0 e 2
    opcaoComputador = rand() % 3;

    //Empate
    if (opcaoJogador == opcaoComputador)
    {
        printf("Ambos escolheram o mesmo!\n");
        printf("Deu empate!\n");
    }
    //Computador Vence
    else if (opcaoJogador == 0 && opcaoComputador == 1)
    {
        printf("Jogador: Pedra     Computador: Papel\n");
        printf("Computador venceu!\n");
    } else if (opcaoJogador == 1 && opcaoComputador == 2)
    {
        printf("Jogador: Papel     Computador: Tesoura\n");
        printf("Computador venceu!\n");
    } else if (opcaoJogador == 2 && opcaoComputador == 0)
    {
        printf("Jogador: Tesoura     Computador: Pedra\n");
        printf("Computador venceu!\n");
    }
    //Jogador Vence
    else if (opcaoJogador == 1 && opcaoComputador == 0)
    {
        printf("Jogador: Papel     Computador: Pedra\n");
        printf("Jogador venceu!\n");
    } else if (opcaoJogador == 2 && opcaoComputador == 1)
    {
        printf("Jogador: Tesoura     Computador: Papel\n");
        printf("Jogador venceu!\n");
    } else if (opcaoJogador == 0 && opcaoComputador == 2)
    {
        printf("Jogador: Pedra     Computador: Tesoura\n");
        printf("Jogador venceu!\n");
    }
return;
}

int main() {
    int repetidor = 1;

    //Sistema de repetição do jogo
    while (repetidor == 1)
    {
        sistemaDeVotacao();
        printf ("Digite 1 para jogar novamente: ");
        scanf("%i", &repetidor);
    }
}