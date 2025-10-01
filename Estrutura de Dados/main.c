#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fracao.h"

int main(){

    Fracao F1 = criarFracao(2, 5);
    /*F1.N = 2;
    F1.D = 5;*/
    exibirFracao(F1);
    
    //printf("%d / %d\n", F1.N, F1.D);

    Fracao F2 = criarFracao(12, 20);
   /* F2.N = 12;
    F2.D = 20;*/
    exibirFracao(F2);
    
    //printf("%d / %d\n", F2.N, F2.D);

    Fracao F3 = criarFracao(11, 17);
    /*F3.N = 11;
    F3.D = 17;*/
    exibirFracao(F3);
    
    //printf("%d / %d\n", F3.N, F3.D);


    Fracao F4 = criarFracao(-60, 75);
    /*F4.N = -60;
    F4.D = 75;*/
    exibirFracao(F4);
    
    //printf("%d / %d\n", F4.N, F4.D);

    Fracao F5 = criarFracao(10, 50);
    /*F5.N = 10;
    F5.D = 50;*/
    
    exibirFracao(F5);
    
    //printf("%d / %d\n", F5.N, F5.D);

    return 0;
}