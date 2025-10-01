#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

void InsertionSort(int * V, int N);
void ExibirVetor(int * V, int N);

//OBS:

// * V (passagem de parametro por referencia)
// N (passagem de parametro por VALOR)

int main(){

    int Conjunto[] = {1, 9, 7, 8, 5, 2};
    int Tamanho = sizeof(Conjunto) / sizeof(int);

    InsertionSort(Conjunto, Tamanho);
    ExibirVetor(Conjunto, Tamanho);

  clock_t T0 = clock();
  InsertionSort(Conjunto, Tamanho);
  clock_t TF = clock();

  ExibirVetor(Conjunto, Tamanho);

  double TempoCPU = (double) (TF - T0) / CLOCKS_PER_SEC;
  printf(" Tempo de CPU: %f\n",TempoCPU );

    


    return 0;



}

void InsertionSort(int * V, int N){

    int Chave;
    int i;
    int j;

    for(i = 1; i < N; i++){
        Chave = V[i];
        j = i - 1;

        while (V[j] > Chave)
        {
            V[j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave;
        ExibirVetor(V, N);
        
    }

}


void ExibirVetor(int * V, int N){
    int i;
    for(i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");

}