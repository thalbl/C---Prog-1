#include <stdio.h>
#include <math.h>

int numDigitos(int x);
int recNumDig(int x, int num);
double calcularRaizRec(double n, double xi, double xi_1);
double numeroHarmonicoRecursivo(double n);

int main(){

    //começo a
    int sem_recursao = numDigitos(12);
    int recursao = recNumDig(12, 0);

    printf("SEM RECURSAO: %d \n COM RECURSAO: %d \n", sem_recursao, recursao);
    //fim a

    // ----------------------------------------------------

    //começo b
    double n = 612.0;
    double x0 = 10.0;
    double ini = 0.0;
    double recursaoB = calcularRaizRec(n, x0, ini);
    printf("COM RECURSAO B: %.4f\n",  recursaoB);
    //fim b

    //-----------------------------------------------------

    //começo c
    double n_harmonica = 3.0;
    double recursaoC = numeroHarmonicoRecursivo(n_harmonica);
    printf("COM RECURSAO C: %.5f\n", recursaoC);
    //fim c
}

//------------------------------------------------------

//A
int numDigitos(int x) {
    int num = 0;
    do {
        num++; //x possui ao menos 1 dígito.
        x /= 10;
    } while (x); //Equivale a "while(x != 0)"
    return num;
}

//------------------------------------------------------

int recNumDig(int x, int num){
    //A função entra com dois parametros, o numero que quer saber a quantia de digitos e o digito inicial (0)
    //Verificamos se x = 0, pois se for, só retornamos o num inicial. 
    //Caso x não for 0 entramos na recursão, onde pegamos x e dividimos por 10 e acrescentamos 1 a num
    //A recursão acontece até x / 10 = 0, onde ele retorna num. 
   return (x == 0) ? num : recNumDig(x / 10, num + 1);
}
//FIM A

//------------------------------------------------------

//B
double calcularRaizRec(double n, double xi, double xi_1){
    if(fabs(xi - xi_1) < 1e-6){
        return xi;
    }
    else{
        xi_1 = xi;
        xi = 0.5 * (xi + n/xi);
        return calcularRaizRec(n, xi, xi_1);
    }
}
//FIM B

//------------------------------------------------------

//C
double numeroHarmonicoRecursivo(double n){
    if(n == 1){
        return 1;
    }
    else{
        return 1/n + numeroHarmonicoRecursivo(n - 1);
    }
}
//FIM C