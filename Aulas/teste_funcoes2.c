#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int c = 98;

float mult (int a, int b) {
    c = c -1;
    return 0;
}

int main () {
    system("cls");
    int a;
    c = 25;
    a = mult(c, 2);
    printf("a = %d e c = %d", a, c);
}