#include <stdio.h>

int main(){

    int vetor[3] = {1,2,3};
    int *ponteiro1 = vetor; //aponta diretamente para a primeira posição
 
    int *ponteiro2 = &vetor[2];//forçando que ele aponte para uma posição

    printf("%i \n", *ponteiro1);//->printa 1
    printf("%i \n", *ponteiro2);//->printa 3
    //a maneira correta de darmos um printf num endereço de memória é com %p
    //<------------------------------###-------------------------------->
    //manipulando os valores

    int *ponteiro = &vetor[0];
    *ponteiro = 4;
    printf("%i \n", vetor[0]);
}