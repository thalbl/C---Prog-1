#include <stdio.h>
#include <stdlib.h>

void max(int *v, int *n){
    int maior = 0;
    for(int i = 0; i < 5; i++){
        if(*(v + i) > *(v + i + 1) && *(v + i) > maior){
            maior = *(v+i);
        }
        else if(*(v + i) < *(v + i + 1) && *(v + i + 1) > maior){
            maior = *(v + i + 1);
        }
    }
    *n = maior;
}

int main(){
    int v[5];
    int n = 3;  

    for(int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    max(v, &n);

    printf("\nMaior eh: %d", n);
    return 0;
}