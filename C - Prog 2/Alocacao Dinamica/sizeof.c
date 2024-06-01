#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
    int c;
}x;


int main(){
    x estrutura;

    //Sizeof retorna o valor em bytes de um tipo de variavel
    printf("%i", sizeof(estrutura));


    return 0;
}