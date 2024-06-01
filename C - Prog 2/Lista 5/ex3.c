#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("tempos-corrida.txt", "r");
    if(f == NULL){
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    
    int n_jogadores, n_corridas;
    fscanf(f, "%d %d", &n_jogadores, &n_corridas);

    int menor_tempo_total = -1; 
    int atleta_menor_tempo = -1;
    
    for (int i = 0; i < n_jogadores; i++) {
        int horas, minutos, segundos;
        int tempo_total = 0;
        
        for (int j = 0; j < n_corridas; j++) {
            fscanf(f, "%d %d %d", &horas, &minutos, &segundos);
            tempo_total += horas * 3600 + minutos * 60 + segundos;
        }
        
        if (menor_tempo_total == -1 || tempo_total < menor_tempo_total) {
            menor_tempo_total = tempo_total;
            atleta_menor_tempo = i + 1;
        }
    }
    
    // Imprimir o número do atleta com o menor tempo total
    printf("%d\n", atleta_menor_tempo);
    fclose(f);
    system("pause");
    return 0;
}