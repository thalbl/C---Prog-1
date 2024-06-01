#include <stdio.h>
#include <stdlib.h>

float mudarSalario(float *salario, float *porcentagem){
    *salario =  *salario + ((*salario) * (*porcentagem));
    return *salario;
}

int main(){
    float salario = 2000.0f;
    float porcentagem = 0.1f;
    float novo_salario = mudarSalario(&salario, &porcentagem);
    printf("%f", novo_salario);
    
}