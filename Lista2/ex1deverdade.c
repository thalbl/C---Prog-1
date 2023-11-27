
/*Programa que calcula a raiz quadrada através de duas funções e compara seu resultado. Uma utilizando o sqrt e outra, o mé-
todo de Newton*/
#include <stdio.h>
#include <math.h>

// Função para calcular a raiz quadrada utilizando o Método de Newton
double calcularRaiz(double n, double x0){
    double xi = x0; //valor inicial
    double xi_1 = 0.0; //valor anterior

// Loop até a diferença entre xi e xi_1 ser menor que 10^-6
    while(fabs(xi - xi_1)>= 1e-6){
        xi_1 = xi; //Atualiza valor anterior
        xi = 0.5 * (xi + n/xi);// Aplica a fórmula do Método de Newton
    }
    return xi;
}


int main(){
    
    double n = 612.0;// Número para o qual queremos calcular a raiz quadrada
    double x0 = 10.0;
    double raiz_sqrt = sqrt(n);
    double raiz_newton = calcularRaiz(n, x0);

    // Imprime os resultados
    printf("Número: %.2f\n", n);
    printf("Raiz calculada com sqrt: %.7f\n", raiz_sqrt);
    printf("Raiz calculada com Método de Newton: %.7f\n", raiz_newton);

    return 0;
}