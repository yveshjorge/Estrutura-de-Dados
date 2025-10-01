#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fp; //fp é ponteiro para arquivo
    fp = fopen("bd/teste.txt", "w");
    if (fp == NULL){
        printf("O arquivo nao foi aberto");
        exit(1);
    }
    fprintf(fp,"Flamengo foi eliminado" );
    fclose(fp);

    return 0;










}