#include <stdio.h>

typedef struct{
    double coeficientes[3];
} Polinomio;

void lerPolinomio(Polinomio *p){
    printf("Entre com os coeficientes:\t");
    //lf é recomendado para double dentro de um scanf
    //p -> coeficientes[0] = p(um ponteiro) acessa o elemento do vetor do polinomio
    scanf("%lf %lf %lf", &(p->coeficientes[0]), &(p->coeficientes[1]), &(p->coeficientes[2]));
}

int saoMultiplos(Polinomio p1, Polinomio p2, int N){
    if(N < 2){
        return 0;
    }
    //Verifica se o coeficiente de p1 é diferente que o de p2 * p1
    for(int i = 0; i < 3; i++){
        if(p1.coeficientes[i] != N * p2.coeficientes[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    Polinomio p1, p2;
    lerPolinomio(&p1);
    lerPolinomio(&p2);

    int N;
    printf("Entre com o N, deve ser maior que 2:\t\n");
    scanf("%d", &N);

    if(saoMultiplos(p1, p2, N)){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }
    return 0;
}