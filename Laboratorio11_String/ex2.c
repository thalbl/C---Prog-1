#include <stdio.h>
int main(){

    //ORDEM DA MATRIZ
    int n, i = 0, j = 0;
    printf("ORDEM DA MATRIZ: ");
    scanf("%d", &n);
    if(n <= 1 || n >= 100){
        return 0;
    }

    int vetor[n][n];
    int somaLinha[n];
    int somaColuna[n];
    int somaDiagonal = 0, somaDiagonal2 = 0;

    //Inserindo Valores no vetor
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Linha [%d] | Coluna [%d]: ", i+1, j+1);
            scanf("%d", &vetor[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d", vetor);
        }
        printf("\n");
    }

    //Soma diagonal
    for(i = 0; i < n; i++){
        somaDiagonal += vetor[i][i];
    }
    //Soma diagonal invertida
    for(i = 0; i < n; i++){
        somaDiagonal2 += vetor[i][n - i - 1];
    }
    
    printf("SOMA DIAGONAL: %d  SOMA DIAGONAL INVERSA: %d", somaDiagonal, somaDiagonal2);

    return 0;
}