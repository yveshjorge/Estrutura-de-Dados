#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int C;
int M;

void SelectionSort(int * V, int N); //ordenar o vetor "V" de tamanho N

int main(){

    C = 0;
    M = 0;

    int Vetor[] = {6,5,4,8,3,2,1};
    int Tamanho = sizeof(Vetor) / sizeof(int);

    SelectionSort(Vetor, Tamanho);

    for(int i = 0; i < Tamanho; i++) printf("%d\n", Vetor[i]);
}

void SelectionSort(int * V, int N) {
    for(int i = 0; i < N - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < N; j++){
            if(V[j] < V[minIndex]) minIndex = j;
        }
        M = M + 3;
        int temp = V[minIndex];
        V[minIndex] = V[i];
        V[i] = temp;


    }
}