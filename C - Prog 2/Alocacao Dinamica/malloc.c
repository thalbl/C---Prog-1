#include <stdio.h>
#include <stdlib.h>

int main(){ 
    //a função malloc é usada para reservar um bloco dentro da memória
    int *p = (int *) malloc(sizeof(int)); //malloc retorna o endereço desse bloco que foi apontado, PONTEIRO DO TIPO >>VOID!!!<<
    //(int *) força que o o ponteiro do malloc retorne o ponteiro no tipo adequado.


    *p = 1000;
    printf("%i", *p);
}   