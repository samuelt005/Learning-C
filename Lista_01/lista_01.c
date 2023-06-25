#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1.  A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno. 
    void questao01(){
        float comprimento;
        float largura;
        float area;
        printf("Calculo da area do terreno\n");
        printf("Comprimento do terreno: ");
        scanf("%f", &comprimento);
        printf("Largura do terreno: ");
        scanf("%f", &largura);
        area = comprimento * largura;
        printf("Area do imovel: %.2f\n", area);
        
        return;
}

//2.  Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos compra-dos para um haras.
    void questao02() {
        const int ferraduras = 4;
        int cavalos;
        int total;
        printf("Quantidade de ferraduras necessarias\n");
        printf("Insira quantidade de cavalos: ");
        scanf("%i", &cavalos);
        total = cavalos * ferraduras;
        printf("Total de ferraduras: %.0i ", total);
        
        return;
}

//3.  A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.
    void questao03() {
        int paes;
        int broas;
        float totalVendas;
        float valorPoupanca;
        const float precoPao = 0.12;
        const float precoBroa = 1.50;
        printf("Calculo de total de vendas\n");
        printf("Insira a quantidade de paes vendidos no dia: ");
        scanf("%i", &paes);
        printf("Insira a quantidade de broas vendidas no dia: ");
        scanf("%i", &broas);
        totalVendas = (paes * precoPao) + (broas * precoBroa);
        printf("Total de vendas no dia: R$ %.2f\n", totalVendas);
        valorPoupanca = totalVendas * 0.1;
        printf("Valor para poupanca: R$ %.2f\n", valorPoupanca);
        
        return;
        
}

//4.  Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS 
    void questao04() {
        char nome[50];
        int idade;
        const int diasDoAno = 365;

        printf("Insira o seu nome: ");
        scanf("%s", nome);
        printf("Insira sua idade: ");
        scanf("%i", &idade);
        int tempoDeVida = diasDoAno * idade;
        printf("%s, ", nome);
        printf("voce ja viveu %i dias", tempoDeVida);
        
        return;
}

//5.  Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. 
    void questao05() {
        float precoGasolina;
        float pagamento;

        printf("Insira o preço da gasolina por litro: ");
        scanf("%f", &precoGasolina);
        printf("Insira o valor que deseja colocar no tanque: ");
        scanf("%f", &pagamento);
        float ltsGasolina = pagamento / precoGasolina;
        printf("Voce colocou %.2f litros de gasolina", ltsGasolina);
        
        return;
}

//6.  O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte o peso do prato. 
    void questao06() {
        float precoKilo = 12.00, pesoPrato = 0.75, pesoTotal, valorLiquido;

        //Inserção dos dados
        printf("Insira o peso total do prato em Kg: ");
        scanf("%f", &pesoTotal);

        //Verificador para identificar se o peso inserido é maior que o do prato
        if (pesoTotal > pesoPrato)
        {
            //cálculo do valor a pagar
            valorLiquido = (pesoTotal - pesoPrato) * precoKilo;
            printf("O seu prato custa R$ %.2f", valorLiquido); 
        } else
        {
        printf("Peso invalido!");
        }
        
        return;
}

//
    void questao07() {
        int dia, mes, totalDias;
        char barra;

        //Inserção dos dados
        printf("Insira o dia/mes (no formato dd/mm): ");
        scanf("%i%c%i", &dia, &barra, &mes);

        //Cálculo dos dias corridos até o presente dia
        totalDias = (mes * 30) + dia;
        printf("Ja se passaram %.0i dias desde o inicio do ano", totalDias);

        return;
}

//
    void questao08() {
        float notaUm, notaDois, notaTres, media;
        const float aprovacao = 70;

        //Inserção dos dados
        printf("Insira a primeira nota: ");
        scanf("%f",&notaUm);
        printf("Insira a segunda nota: ");
        scanf("%f",&notaDois);
        printf("Insira a terceira nota: ");
        scanf("%f",&notaTres);

        //Cálculo da média
        media = ((notaUm * 1) + (notaDois * 2) + (notaTres * 3)) / 6;
        printf("Sua media e %.2f \n", media);

        //Verificador de aprovação
        if (media >= aprovacao)
        {
            printf("Voce esta aprovado!");
        } else
        {
            printf("Voce foi reprovado!");
        }
        
        return;
} 

//9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.
    void questao09() {
        float precoP = 10.00, precoM = 12.00, precoG = 15.00, quantidadeP, quantidadeM, quantidadeG, total;

        printf("Informe a quantidade de camisetas P vendidas: ");
        scanf("%f", &quantidadeP);
        printf("Informe a quantidade de camisetas M vendidas: ");
        scanf("%f", &quantidadeM);
        printf("Informe a quantidade de camisetas G vendidas: ");
        scanf("%f", &quantidadeG);

        total = (precoP * quantidadeP) + (precoM * quantidadeM) + (precoG * quantidadeG);
        printf("O total da venda e R$ %.2f", total);
        
        return;
}

//10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y). 
    void questao10() {
        float x1, x2, y1, y2, dist;

        printf("Informe o X do primeiro ponto: ");
        scanf("%f", &x1);
        printf("Informe o Y do primeiro ponto: ");
        scanf("%f", &y1);
        printf("Informe o X do segundo ponto: ");
        scanf("%f", &x2);
        printf("Informe o Y do segundo ponto: ");
        scanf("%f", &y2);

        dist = sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
        printf("A distância entre os dois pontos e de %.2f", dist);
        
        return;
}

//11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.
    void questao11() {
        int dias, meses, anos, total;

        printf("Insira a quantidade de dias sem acidentes para converter: ");
        scanf("%i", &total);
        anos = total / 360;
        meses = (total - (anos * 360)) / 30;
        dias = total - (anos * 360) - (meses * 30);
        printf("Ja se passaram %i anos, %i meses e %i dias", anos, meses, dias);

        return;
}

//12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. 
    void questao12() {
        float antigoSalario, novoSalario, salarioLiquido;
        
        printf("Insira o valor atual do salario bruto do funcionario: ");
        scanf("%f", &antigoSalario);

        printf("Salario bruto atual: R$ %.2f\n", antigoSalario);
        novoSalario = antigoSalario * 1.15;
        printf("Novo salario bruto: R$ %.2f\n", novoSalario);
        salarioLiquido = novoSalario - (novoSalario * 0.08);
        printf("Novo salario liquido: R$ %.2f\n", salarioLiquido);

        return;
    }

//13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x DEZENA = x UNIDADE = x
    void questao13() {
        char numero[4];
        char centenas, dezenas, unidades;


        printf("Insira um numero de 3 digitos: ");
        scanf("%s", numero);
        centenas = numero[0];
        dezenas = numero[1];
        unidades = numero[2];
        printf("Centenas: %c\n", centenas);
        printf("Dezena: %c\n", dezenas);
        printf("Unidade: %c\n", unidades);

        return;
    }

//14. Calcule a área de uma pizza que possui um raio R (pi=3.14).
    void questao14() {
        const float pi = 3.14159265359;
        float raio, area;

        printf("Insira o raio da pizza em cm: ");
        scanf("%f", &raio);
        area = pi * (raio * raio);
        printf("A area da pizza e de: %.2f cm quadrados", area);

        return;
    }

//15. Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não pa-guem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe. 
    void questao15() {
        float total, vlrFelipe;
        int vlrCarlosAndre;

        printf("Insira o valor total da conta a ser dividida: ");
        scanf("%f", &total);

        vlrCarlosAndre = total / 3;
        vlrFelipe = total - (vlrCarlosAndre * 2);

        printf("Valor a ser pago por Carlos: R$ %.2i.00\n", vlrCarlosAndre);
        printf("Valor a ser pago por Andre: R$ %.2i.00\n", vlrCarlosAndre);
        printf("Valor a ser pago por Felipe: R$ %.2f\n", vlrFelipe);

        return;
    }

//16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra. 
    void questao16() {
        float quantSanduiches;
        const float queijo = 2 * 50;
        const float presunto = 50;
        const float hamburguer = 100;
        float pQueijo, pPresunto, pHamburguer;

        printf("Insira a quantidade de sanduiches: ");
        scanf("%f", &quantSanduiches);

        pQueijo = (quantSanduiches * queijo) / 1000;
        pPresunto = (quantSanduiches * presunto) / 1000;
        pHamburguer = (quantSanduiches * hamburguer) / 1000;
        
        printf("Total de KG para\n");
        printf("Queijo: %.3f KG\n", pQueijo);
        printf("Presunto: %.3f KG\n", pPresunto);
        printf("Hamburguer: %.3f KG\n", pHamburguer);
        
        return;
    }

//17. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão). 
    void questao17() {
        //(1 °C × 9/5) + 32 = 33,8 °F
        float celsius, fahrenheit;

        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = 32 + (1.8 * celsius);
        printf("Temperatura em Fahrenheit: %.2f \n", fahrenheit);

        return;
    }


int main() {
    while (1)
    {
        int i, selecao;    
        void (*questao[17])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15, questao16, questao17};

        printf ("\nDigite o numero da questao (de 1 a 17): ");
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
