#include <stdio.h>
#include<math.h>

int potencia(int x, int n);

int main(){
    int xnumero, nexpoente;
    printf("Entre com o x e com o n: ");
    scanf("%d %d", &xnumero, &nexpoente);
    if(nexpoente%2 != 0){
        return 0;
    }
    int resultado;
    resultado = potencia(xnumero, nexpoente);
    printf("Entrada: x = %d; y = %d\tSaida:\t%d", xnumero, nexpoente, resultado);
}

int potencia(int x, int n){
    if(n < 1){
        return  0;
    }
    else{
        int y = n;
        return pow(x, y) - pow(x, y-1) + potencia(x, n-2);
        //n = 6 -> 2^6 - 2^6-1 + 2
    }
}