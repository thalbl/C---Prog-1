#include<stdio.h>

int main(){
    int vetor[3][3];
    int somaD1, somaD2;

    printf("Entre com o vetor: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", vetor[i][j]);
        }
    }
    //SOMA DIAGONAL
    for(int i = 0; i < 3; i++){
        somaD1 += vetor[i][i];
    }
    //SOMA DIAGONAL INVERTIDA
    for(int i = 0; i < 3; i++){
        somaD2 += vetor[i][3 - i - 1];
    }
    //SOMA LINHA
    int somaLinha[3];
    int somaColuna[3];

    for(int i = 0; i < 3; i++){
        somaLinha[i] = 0;
        for(int j = 0; j < 3; j++){
            somaLinha[i] += vetor[i][j];
        }
    }

    //Soma coluna:
    for(int j = 0; j < 3; j++){
        somaColuna[j] = 0;
        for(int i = 0; i < 3; i++){
            somaColuna[j] += vetor[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        printf("Soma Linha: %d\n", somaLinha[i]);
        printf("Soma Coluna: %d\n", somaColuna[i]);
    }
    printf("Soma Diagonal: %d\n", somaD1);
    printf("Soma Diagonal2: %d\n", somaD2);
}