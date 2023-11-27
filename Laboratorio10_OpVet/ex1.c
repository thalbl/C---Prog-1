#include <stdio.h>

int main(){
    int qtdCasas;

    printf("Quantidade de casas: ");
    scanf("%d", &qtdCasas);

    int vetCasas[qtdCasas];
    int vetBombas[qtdCasas];
    int quantidadeBombas = 0;

    for(int i = 0; i < qtdCasas; i++){
        printf("A casa [%d] possui bombas?: \n", i);
        scanf("%d", &vetCasas[i]);
    }

    for(int j = 0; j < qtdCasas; j++){
        if(vetCasas[j] == 1){
            quantidadeBombas++;
        }

        if(vetCasas[j-1] == 1){
            quantidadeBombas++;
        }

        if(vetCasas[j+1] == 1){
            quantidadeBombas++;
        }

        vetBombas[j] = quantidadeBombas;
        quantidadeBombas = 0;
    }

    for(int i = 0; i < qtdCasas; i++){
        printf("CASAS: %d\n", vetCasas[i]);
        printf("QUANTIDADE DE BOMBAS POR CASA: [%d]\n", vetBombas[i]);
    }
}