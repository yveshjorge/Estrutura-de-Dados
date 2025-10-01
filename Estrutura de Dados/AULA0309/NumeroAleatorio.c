#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//rand(): gera um número pseudo-aleatório 
//srand(): ponto de partida para gerar numero


#define TAMANHO 20

int main(){

    int V[TAMANHO];

    srand(time(NULL));
    for(int i = 0; i < TAMANHO; i++) V[i] = rand() % 100;

    clock_t T0 = clock();
    for(int i = 0; i < TAMANHO; i++) printf("%d\t",  V[i]);
    clock_t TF = clock();

    double TempoCPU = ((double)(TF - T0))/ CLOCKS_PER_SEC;
    
    printf("\nInicio: %d", T0);
    printf("\nFim: %f", TF);
    printf("\nTempo de CPU: %f", TempoCPU);
    
    
   


}