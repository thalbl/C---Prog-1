#include <stdio.h>
#include <stdlib.h>

int vogal(char *frase){

    int qtdVogal = 0;
    for(int i = 0; i < 20; i++){
        if(*(frase + i) == 'a' || 
        *(frase + i) == 'e' ||
        *(frase + i) == 'i' ||
        *(frase + i) == 'o' ||
        *(frase + i) == 'u' ||
        *(frase + i) == 'A' ||
        *(frase + i) == 'E' ||
        *(frase + i) == 'I' ||
        *(frase + i) == 'O' ||
        *(frase + i) == 'U'){
            qtdVogal += 1;
        }
        printf("%c", *(frase + i));
    }
    return qtdVogal;
}

int main(){

    char frase[20];
    gets(frase);

    int qtdVogais = vogal(frase);

    printf("%d \n", qtdVogais);

    return 0;
}