#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float notas[6];
    int i = 0;
    do
    {
        scanf("%f", &notas[i]);
        i++;
    } while (i<6);

    for (int i = 0; i < 6; i++)
    {
        printf("Nota %i: %f\n", i, notas[i]);
    }
    
}