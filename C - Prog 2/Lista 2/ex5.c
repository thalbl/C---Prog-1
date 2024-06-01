#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int posicao(char *substr, char *str){
    char *pch = strstr(str, substr);
    if(pch != NULL){
        return (pch - str);
    }
    return NULL;
}

int main(){
    char str1[] = "TESTEDESTRING"; //STRING EM [7]
    char str2[] = "STRING";
    int index = posicao(str2, str1);//RETORNA [7]
     printf("Index da substring: %i\n", index);
}