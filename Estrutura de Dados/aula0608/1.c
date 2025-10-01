#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{

    int N;
    int D;
    
} Fracao;

//Prototipo de funcao

 void exibirFracao(Fracao F);
 Fracao criarFracao(int Num, int Den);
 int calcularMDC(int A, int B);
 Fracao simplificarFracao(Fracao F);

 //Funçao Principal

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

 void exibirFracao(Fracao F) {

  printf("%d / %d\n", F.N, F.D);

 }
 Fracao criarFracao(int Num, int Den){

    Fracao F;
    F.N = Num;
    F.D = Den;
    return F;
 }

 int calcularMDC(int A, int B){

    if ( A < 0) A = -A;
    if (B < 0) B = -B;

    while(A % B != 0) {
        int temp = A;
        A = B;
        B = temp % B;


    }
    
    Fracao simplificarFracao(Fracao F){
        int MDC = calcularMDC(F.N, F.D);
        F.N = F.D / MDC;
        F.D = F.D / MDC;
        return F;


    }

    return B;
 }
