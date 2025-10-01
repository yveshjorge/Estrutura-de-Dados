 #include "fracao.h"
 
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