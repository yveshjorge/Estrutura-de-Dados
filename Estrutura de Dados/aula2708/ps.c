#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

/*Protótipos de funçoes*/

/*Pesquisa Sequencial: Retorna a posição do elemento CHAVE no Vetor V, de N elementos. */

 PesquisaSequencial(int * V, int N, int Chave);


/*Implementaçao de funcao principal (main)*/

int main(){

    int Numeros[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
};

int Tamanho = sizeof(Numeros) / sizeof(int); /*Tamanho do vetor (120 B) / Tamanho do int (4 B) = 30*/
int Elemento = 16;
int Posicao = PesquisaSequencial(Numeros, Tamanho, Elemento);

if(Posicao != ERRO) printf("O elemento %d esta na posicao %d.\n", Elemento, Posicao);
else printf("O elemento %d nao esta no vetor. \n", Elemento);

    
    
    return 0;
}


/*Implementaçao das funçoes cujos protótipos foram definidos (antes)*/

int PesquisaSequencial(int * V, int N, int Chave){

    for(int i = 0; i < N; i++)
        if (V[i] == Chave) 
            return i;
        
    
    return ERRO;
}