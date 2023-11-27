#include<stdio.h>

int main(){
    int N, M;

    printf("Entre com o tamanho dos dois vetores A E B: ");
    scanf("%d %d", &N, &M);
    

    int vetorA[N], vetorB[M], vetorC[N + M];
    
    for(int i = 0; i < N; i++){
        printf("Entre com o valor [%d] do primeiro vetor (ORDENADO!): ", i);
        scanf("%d", &vetorA[i]);
    }

    for(int j = 0; j < M;  j++){
        printf("Entre com o valor [%d] do segundo vetor (ORDENADO!): ", j);
        scanf("%d", &vetorB[j]);
    }

    int i = 0, j = 0, k = 0;
    while(i < N && j < M)//verifica se a posição é valida{
        if(vetorA[i] < vetorB[j]){
            vetorC[k] = vetorA[i];
            i++;
        }
        else{
            vetorC[k] = vetorB[j];
            j++;
        }
        k++;
    }

    for(int x = 0; x < N + M; x++){
        printf(" %d ", vetorC[x]);
    }
    return 0;

}