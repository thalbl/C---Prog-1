#include <stdio.h>
#include <stdlib.h>

typedef struct _TEMPO
{
    int hora, minuto, segundo;
} TEMPO ;

int main()
{
    FILE *pa;
    int a, c, h=0, m=0, s=0, r;
    char nome[30];
    TEMPO *t, *maisRapido;
    
    t = (TEMPO *) malloc (sizeof(TEMPO));
    if (!t) {
        printf("Erro na alocacao da memoria.\n");
        exit(1);
    }
    
    maisRapido = (TEMPO *) malloc (sizeof(TEMPO));
    if (!maisRapido) {
        printf("Erro na alocacao da memoria.\n");
        exit(1);
    }
    
    if((pa = fopen("tempos-corrida.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
    
    fscanf(pa, "%d %d", &a, &c);
    maisRapido->hora = 0;
    maisRapido->minuto = 0;
    maisRapido->segundo = 0;
    
    for(int i=1; i<=a; i++) {
        for(int j=0; j<c; j++) {
            fscanf(pa, "%d %d %d", &(t->hora), &(t->minuto), &(t->segundo));
            h = h + t->hora;
            m = m + t->minuto;
            s = s + t->segundo;
        }
        
        if(maisRapido->hora > h) {
            maisRapido->hora = h;
            maisRapido->minuto = m;
            maisRapido->segundo = s;
            r = i;
        } else if(maisRapido->hora == h && maisRapido->minuto > m) {
            maisRapido->hora = h;
            maisRapido->minuto = m;
            maisRapido->segundo = s;
            r = i;
        } else if(maisRapido->minuto == m && maisRapido->segundo > s) {
            maisRapido->hora = h;
            maisRapido->minuto = m;
            maisRapido->segundo = s;
            r = i;
        }
        
        h = 0;
        m = 0;
        s = 0;
    }

    fclose(pa);
    
    free(maisRapido);
    free(t);
    
    printf("%d", r);
    
    return 0;
}
