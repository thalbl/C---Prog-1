#include <stdio.h>

int main(){
    char prova[] = "ThalissonBraga 6 9";
    char nome[50];
    int nota1 = 0;
    int nota2 = 0;
    int media = 0;

    sscanf(prova, "%s %d %d", &nome, &nota1, &nota2); 
    //sscanf tem como parametro a string que vc quer ler, o tipo de dado que vc quer conseguir dela(separado por espaço)
    media = (nota1 + nota2)/2;
    printf("%d", media);
}