#include <stdio.h>

int main () {
    int numero_inicial, numero_final, contador;

    printf("Insira o numero inicial: ");
    scanf("%i", &numero_inicial);
    printf("Insira o numero final: ");
    scanf("%i", &numero_final);
    contador = numero_inicial;

    if (numero_inicial < numero_final) {
            while (contador <= numero_final) {
                printf ("%i\n", contador);
                contador ++;   
            };
    } else {
            while (contador >= numero_final) {
            printf ("%i\n", contador);
            contador --;    
        }
    }
}