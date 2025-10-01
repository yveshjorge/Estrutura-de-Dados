#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main(){

    Equipe * E = LerDados("bd.csv");
    for(int i = 0; i < 20; i++)
        printf("%.2f\t%s\n", E[i].Aproveitamento, E[i].Time);

    return 0;
    
}