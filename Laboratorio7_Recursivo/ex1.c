#include <stdio.h>

int somaAlgarismosRec(int numero);

int main(){
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    int resultado = somaAlgarismosRec(numero);
    printf("A soma de seus algarismos sera: %d", resultado);
}

int somaAlgarismosRec(int numero){
    if(numero == 0){
        return 0;
    }
    else{
        return numero % 10 + somaAlgarismosRec(numero/10);
    }
}