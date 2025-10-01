#include <stdio.h>
#include <stdlib.h>

#define ERRO -1 // usado para indicarque o elemento nao esta no vetor

int PesquisaBinaria(int * V, int N, int Chave);
int PesquisaBinariaRecursiva(int * V, int Esquerda, int Direita, int Chave);


int main(){

    int Numeros[] = {1,2,4,5,6,7,8,10,12,14,15,16,18,20,21,22};
    int Tamanho = sizeof(Numeros) / sizeof(Numeros[0]);
    int Elemento = 21;
    int Posicao;

    Posicao =  PesquisaBinaria(Numeros, Tamanho, Elemento);
    Posicao = PesquisaBinariaRecursiva(Numeros, 0 , Tamanho - 1, Elemento);
    
    
    
    if (Posicao == ERRO) printf("O elemento [%d] nao esta no vetor! \n", Elemento);
    else printf("O elemento [%d] esta na posicao %d! \n", Elemento, Posicao);
}

//Versão Iterativa

int PesquisaBinaria(int * V, int N, int Chave){
    int Esquerda = 0;
    int Direita = N - 1;

    while(Esquerda <= Direita){
        int Meio = (Esquerda + Direita) / 2;
        if(V[Meio] == Chave) return Meio;
        else if(V[Meio] < Chave) Esquerda = Meio + 1;
        else Direita = Meio - 1;
    }

    return ERRO;
}

//Versão Recursiva

int PesquisaBinariaRecursiva(int * V, int Esquerda, int Direita, int Chave){

    if(Esquerda > Direita) return ERRO;
    int Meio = (Esquerda + Direita) / 2;
    if (V[Meio] == Chave) return Meio;
    else if (V[Meio] < Chave) return PesquisaBinariaRecursiva(V, Meio + 1, Direita, Chave);
    else return PesquisaBinariaRecursiva(V, Esquerda, Meio - 1, Chave);
}