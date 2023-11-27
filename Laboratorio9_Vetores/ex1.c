#include <stdio.h>
float produtoVetores(int vetV[], int vetY[], int N);

int main(){
    int N = 3;
    int vetV[N];
    int vetY[N];
    for(int i = 0; i < N; i++){
        printf("Entre com os indices de v e w: ");
        scanf("%d %d", &vetV[i], &vetY[i]);
    }

    float produtoDosVetores = produtoVetores(vetV, vetY, N);
    printf("ENTRADA: \t\t SAÍDA:\n N = %d \t\t\t %2.f\n%d  %d\n %d  %d", N, produtoDosVetores, vetV[0], vetV[1], vetY[0], vetY[1]);

    return 0;
}  

float produtoVetores(int vetV[], int vetY[], int N){
    float prod = 0; float acum = 0;
    for(int i = 0; i < N;i++){
        prod = vetV[i] * vetY[i];
        acum += prod;
    }
    return acum;
}
