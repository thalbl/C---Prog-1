#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int *i, j;
    float *notas;
    char *nome;
    //coloque na variável *i o valor 10 de duas formas
    //distintas ...

    //Primeira forma -> atribuindo o valor 10 a variável j e depois apontando o ponteiro i para o endereço de j:
    j = 10;
    i = &j;
    printf("%d \n", *i);

    //Segunda Forma -> alocando um espaço de memória a ser utilizado pelo ponteiro i, e depois atribuindo um valor a esse espaço:
    i = (int *)malloc(sizeof(int));
    *i = 10;
    printf("%i \n", *i);
    free(i);


    //carregue na variável ’notas’ 5 valores distintos de
    //notas ...

    notas = malloc(5 * sizeof(float));
    for(int i = 0; i < 5; ++i){
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("NOTA %i:\t%.5f\n", i+1, notas[i]);
    } 
    free(notas);

    //carregue na variável ’nome’ o seu primeiro e ultimo
    //nome
    // usando somente letras minúsculas
    //...

    nome = (char *)malloc(100 * sizeof(char)); //Maximo de 100 caracteres
    printf("Digite seu nome em minusculas:  ");
    fflush(stdin);
    scanf("%[^\n]", nome);

    //altere as letras iniciais do seu nome para letras
    //maiúsculas ...

    int len = strlen(nome);
    for(int i = 0; i < len; ++i){
        if(i==0 || nome[i - 1] == ' '){
            nome[i] = toupper(nome[i]);
        }
    }

    printf("Nome com letras iniciais maiúsculas: %s\n", nome);
    free(nome);
    return 0;
}