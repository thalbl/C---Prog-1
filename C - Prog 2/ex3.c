#include <stdio.h>

void max(int *v, int *n) {
    int i, max_value = *v; // Inicialize max_value com o primeiro elemento do vetor
    for (i = 1; i < *n; i++) { // Comece com o segundo elemento
        if (*(v + i) > max_value) // Se o elemento atual for maior que o máximo encontrado até agora
            max_value = *(v + i); // Atualize o máximo
    }
    *n = max_value; // Atualize o valor do argumento passado através de n com o valor do maior número
}

int main() {
    int vetor[] = {4, 8, 2, 10, 6}; // Exemplo de vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int maior; // Variável para armazenar o maior número

    max(vetor, &tamanho); // Chama a função max para encontrar o maior número

    printf("O maior numero do vetor eh: %d\n", tamanho); // Imprime o maior número
    return 0;
}
