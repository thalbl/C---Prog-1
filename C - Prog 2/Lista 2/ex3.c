#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float nota;
    char nome;
} tAluno;

int main ()
{
    int *i, j;
    float *notas;
    char *nome;
    //coloque na variável *i o valor 10 de duas formas
    //distintas ...

    //Primeira forma:
    j = 10;
    i = &j;
    printf("%d", *i);

    //Segunda Forma:



    //carregue na variável ’notas’ 5 valores distintos de
    //notas ...
    //carregue na variável ’nome’ o seu primeiro e ultimo
    //nome
    // usando somente letras minúsculas
    //...
    //altere as letras iniciais do seu nome para letras
    //maiúsculas ...
}