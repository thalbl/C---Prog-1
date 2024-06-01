#include <stdio.h>
#include <stdlib.h>

int main(){

//primeira entrada, sempre quatro valores, divididos em LxC e MxN: caso seja  6 6 2 2
// 6 6 é o tamanho total de entradas, um campo de 36 elementos totais (onde nossos valores serão inseridos). -> LxC
// 2 2 é a separação desses valores inseridos, os lotes, nesse caso, serão analizados em tamanhos de 2x2, ou um quadrado de 4 itens.

    int campo_linha;
    int campo_coluna;
    int lote_linha;
    int lote_coluna;
    int num_margaridas;
    int max_margaridas;
    
    printf("Linhas do campo:\t");
    scanf("%d", &campo_linha);
    printf("\nColunas do campo:\t");
    scanf("%d", &campo_coluna);
    printf("\nLinhas do lote:\t");
    scanf("%d", &lote_linha);
    printf("\nColunas do lote:\t");
    scanf("%d", &lote_coluna);
    max_margaridas = 0;

    //Criando a matriz Campo
    int *campo[campo_linha];
    for(int i = 0; i < campo_linha; i++){
        campo[i] = (int *)malloc(campo_coluna * sizeof(*campo));
    }

    //Inserindo valores na matriz Campo
    for(int i = 0; i < campo_linha; i++){
        for(int j = 0; j < campo_coluna; j++){
            printf("\nMatriz[%d][%d]\t", i, j);
            scanf("%d", campo[i] + j);//Estamos somando j, que é a quantidade de casas que somamos na memória para mudarmos de coluna

        }
    }

    //PRINT MATRIZ
    for(int i = 0; i < campo_linha; i++){
        printf("\n");
        for(int j = 0; j < campo_coluna; j++){
            printf("[%d]", *(campo[i] + j));
        }
    }

    //Verificando lote
    for(int i = 0; i<campo_linha; i+=lote_linha){
        for(int j = 0; j < campo_coluna; j+=lote_coluna){
            num_margaridas = 0;
            for(int k=i; k<(i+lote_linha); k++){
                for(int l = j; l<(j + lote_coluna); l++){
                    num_margaridas += *(campo[k] + l);
                    if(num_margaridas>max_margaridas){
                        max_margaridas = num_margaridas;
                    }
                }
            }
        }
    }

    printf("\nSaida: %d", max_margaridas);
}

