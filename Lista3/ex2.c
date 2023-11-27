#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    printf("Entre com uma palavra:\t");
    scanf("%s", palavra);

    size_t tamanho = strlen(palavra);

    //dividimos o tamanho por 2 pois a verificação só irá até o meio da palavra(devido a troca de caracteres)
    for(int i = 0; i < tamanho / 2; i++){
        int aux = palavra[i];
        palavra[i] = palavra[tamanho - i - 1];
        palavra[tamanho - i - 1] = aux;
    }

    printf("%s", palavra);
    return 0;
}