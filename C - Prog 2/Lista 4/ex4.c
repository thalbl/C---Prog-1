#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGHT 80

int main(){

    FILE *fptrEntrada, *fptrSaida;
    char textoEntrada[100];
    char textoSaida[100];

    scanf("%c", &textoEntrada);
    scanf("%c", &textoSaida);

    fptrEntrada= fopen(textoEntrada, "r");
    fptrSaida = fopen(textoSaida, "w");

    char linha[MAX_LENGHT + 1];


    if(fptrEntrada==NULL){
        printf("Erro ao abrir arquivo.\n");
        return(-1);
    }
    if(fptrSaida==NULL){
        printf("Eror arquvo de saida");
        return(-1);
    }

    while(fgets(linha, 80, fptrEntrada) != NULL){
        for(int i=strlen(linha) - 1; i>=0; --i){
        fputc(linha[i], fptrSaida);
    }
        fputc('\n', fptrSaida);
    }
    fclose(fptrEntrada);
    fclose(fptrSaida);
}