#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nome_arquivo[100];
    char palavra[20];
    char linha[100];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }

    for (int i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    while (fgets(linha, sizeof(linha), arquivo)) {
        
        for (int i = 0; linha[i]; i++) {
            linha[i] = tolower(linha[i]);
        }
        char *ptr = linha;
        while ((ptr = strstr(ptr, palavra)) != NULL) {
            contador++;
            ptr++; 
        }
    }
  
    fclose(arquivo);
    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);
    return 0; 
}
