#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

void sistemaDeVotacao()
{
    //Limpeza do terminal
    system("cls");
    //Definição das variáveis globais
    float total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, totalGeral = 0;
    int encerrador = 0;

    //Votação
    while (encerrador == 0)
    {
        int seletor;
        printf("Na sua opiniao qual o melhor sistema operacional para uso em servidores?\n");
        printf("1- Windows Server.\n2 - Unix.\n3 - Linux.\n4 - Netware.\n5 - Mac OS.\n6 - Outro.\n");
        printf("Digite o numero da sua resposta ou '0' para finalizar a votacao: ");
        scanf("%i", &seletor);

        if (seletor > 0 && seletor < 7)
        //Contabilizador de votos
        {
            switch (seletor)
            {
            case 1:
                total1++;
                break;
            case 2:
                total2++;
                break;
            case 3:
                total3++;
                break;
            case 4:
                total4++;
                break;
            case 5:
                total5++;
                break;
            case 6:
                total6++;
                break;
            default:
                break;
            }
            printf("Voto contabilizado para %i \n", seletor);
            printf("Obrigado por participar!");
            sleep(3);
            system("cls");
        }
        //verificador para encerrar a votação
        else if (seletor == 0)
        {
            printf("Votacao encerrada!");
            sleep(3);
            system("cls");
            encerrador = 1;
        }
        //Verificador para caso seja inserido um número maior que 6
        else if (seletor > 6)
        {
            printf("Numero incorreto!");
            sleep(3);
            system("cls");
        }
    }

    //Calculos pós encerramento da votação
    totalGeral = total1 + total2 + total3 + total4 + total5 + total6;
    total1 = total1 / totalGeral * 100;
    total2 = total2 / totalGeral * 100;
    total3 = total3 / totalGeral * 100;
    total4 = total4 / totalGeral * 100;
    total5 = total5 / totalGeral * 100;
    total6 = total6 / totalGeral * 100;
    
    //Impressão dos votos no terminal em %
    printf("Percentual de votos:\n");
    printf("Windows Server: %.2f %%\n", total1);
    printf("Unix: %.2f %%\n", total2);
    printf("Linux: %.2f %%\n", total3);
    printf("Netware: %.2f %%\n", total4);
    printf("Mac OS: %.2f %%\n", total5);
    printf("Outros: %.2f %%\n", total6);
return;
}

int main() {
    int repetidor = 1;

    //Sistema de repetição da votação
    while (repetidor == 1)
    {
        sistemaDeVotacao();
        printf ("Digite 1 para reiniciar a votacao: ");
        scanf("%i", &repetidor);
    }
}