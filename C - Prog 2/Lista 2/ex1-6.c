#include <stdio.h>

int somarVetor(int vetor[], const int n){
    int soma = 0; //vai ser onde a soma de cada membro do vetor estará
    int *ponteiro;
    int *const finalVetor = vetor + n;//aponta para o ultimo memrbo do vetor

    for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro){
        soma += *ponteiro;
    }
    return soma;
}

int main(){
    int somarVetor(int vetor[], const int n);

    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %i", somarVetor(vetor, 10));
    getchar();
}