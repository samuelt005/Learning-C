#include <stdio.h>

int multiplicacaoRussa(int a, int b) {
    int resultado = 0, loop = 1;

    while (a > 0) {
        if (a % 2 == 1) {
            resultado += b;
        }
        printf("Iteracao numero %d\n", loop);
        printf("Valor atual de A: %d\n", a);
        printf("Valor atual de B: %d\n", b);
        printf("Valor atual do resultado: %d\n\n", resultado);
        a /= 2;
        b *= 2;
        loop++;
    }
    return resultado;
}

int main() {
    int a, b;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    int resultado = multiplicacaoRussa(a, b);

    printf("Resultado da multiplicacao atraves do metodo russo: %d\n", resultado);

    return 0;
}
