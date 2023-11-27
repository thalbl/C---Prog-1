#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    printf("Entre com a palavra:\t");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho/2; i++){
        if(palavra[i] != palavra[tamanho - i - 1]){
            printf("Nao eh um palindromo.");
            return 0;
        }
    }
    printf("Eh um palindromo");
}