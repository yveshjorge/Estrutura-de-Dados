#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50

void InsertionSort(int * V, int N);
void ExibirVetor(int * V, int N);

//OBS:

// * V (passagem de parametro por referencia)
// N (passagem de parametro por VALOR)

int main(){

    system("cls");

    int Conjunto[TAMANHO];
    for(int i = 0; i < TAMANHO; i++) Conjunto[i] = rand();

  clock_t T0 = clock();
  InsertionSort(Conjunto, TAMANHO);
  clock_t TF = clock();

  ExibirVetor(Conjunto, TAMANHO);

  double TempoCPU = (double) (TF - T0) / CLOCKS_PER_SEC;
  printf(" Tempo de CPU: %f\n",TempoCPU );

    


     


}

void InsertionSort(int * V, int N){

    int Chave;
    int i;
    int j;

    for(i = 1; i < N; i++){
        Chave = V[i];
        j = i - 1;

        while (V[j] > Chave && j >= 0)
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