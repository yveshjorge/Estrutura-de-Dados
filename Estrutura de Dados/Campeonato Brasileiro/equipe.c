#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Equipe * LerDados(char * NomeArquivo){

    FILE * fp = fopen(NomeArquivo, "r");
    if (fp == NULL){
        printf("ERRO: não foi possivel abrir o arquivo %s.\n", NomeArquivo);
        exit(1);    
        }

        printf("Arquivo aberto: %s.\n", NomeArquivo);

        Equipe * X = malloc(20 * sizeof(Equipe));
        if (X == NULL){
            printf("ERRO: nao foi possivel reservar memoria para a tabela!\n");
            exit(1);
        }

        printf("Memoria alocada com sucesso!");

        //Lendo (desconsiderando) o cabeçalho da tabela.

        char Cabecalho[200];
        fscanf(fp, "%s", Cabecalho);

        int i = 0; //Posiçao no vetor

        while(fscanf(fp,
         "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;",
          &X[i].Posicao, X[i].Estado, X[i].Time, &X[i].Pontos, &X[i].J, &X[i].V, &X[i].E, &X[i].D,
          &X[i].GP, &X[i].GC, X[i].SD
          
          
          ) == 11){
            X[i].Aproveitamento = 100.0 * X[i].Pontos / (3 * X[i].J);
            i++;

        }
        
        fclose(fp);
        return X;
}