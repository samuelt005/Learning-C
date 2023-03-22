#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//
    void questao01(){

return;
}

//
    void questao02() {

return;
}

//
    void questao03() {

return;
}

//
    void questao04() {

return;
}

//
    void questao05() {

return;
}

//
    void questao06() {

return;
}

//
    void questao07() {

return;
}

//
    void questao08() {

return;
}

//
    void questao09() {

return;
}

//
    void questao10() {

return;
}

//
    void questao11() {

return;
}

// 
    void questao12() {

return;
}

// 
    void questao13() {

return;
}

// 
    void questao14() {

return;
}

// 
    void questao15() {

return;
}

// 
    void questao16() {

return;
}

// 
    void questao17() {

return;
}

// 
    void questao18(){

return;
}

// 
    void questao19() {

return;
}

//
    void questao20() {

return;
}

//
    void questao21() {

return;
}

//
    void questao22() {

return;
}

//
    void questao23() {

return;
}

//
    void questao24() {

return;
}

//
    void questao25() {

return;
}

//
    void questao26() {

return;
}

//
    void questao27() {

return;
}

//
    void questao28() {

return;
}

//
    void questao29() {

return;
}

//
    void questao30() {

return;
}

//
    void questao31() {

return;
}

//
    void questao32() {

return;
}

//
    void questao33() {

return;
}

//
    void questao34() {

return;
}

//
    void questao35() {

return;
}

//
    void questao36() {

return;
}

//
    void questao37() {

return;
}

//
    void questao38() {

return;
}

//
    void questao39() {

return;
}

//
    void questao40() {

return;
}


int main() {
    while (1)
    {
        int i, selecao;    
        void (*questao[40])() = {questao01, questao02, questao03, questao04, questao05, questao06, questao07, questao08, questao09, questao10, questao11, questao12, questao13, questao14, questao15, questao16, questao17, questao18, questao19, questao20, questao21, questao22, questao23, questao24, questao25, questao28, questao29, questao30, questao31, questao32, questao33, questao34, questao35, questao36, questao37, questao38, questao39, questao40};

        printf ("\nDigite o numero da questao (de 1 a 40): ");
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
