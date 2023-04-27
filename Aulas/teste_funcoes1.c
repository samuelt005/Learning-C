#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Valor definido globalmente
int a = 98;

float soma (float op1, float op2) {
    return (op1 + op2);
}

float subt (float op1, float op2) {
    return (op1 - op2);
}

int main () {
    system("cls");
    //Variavel local "a" é substituida
    float a = 0, b = 5;
    printf("%f\n%f\n", soma (a, b), subt(a, b));
    return 0;
}