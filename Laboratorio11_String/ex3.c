#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Entre com a quantidade de questões: ");
    scanf("%d", &n);
    if(n<1 || n > 80){
        return 0;
    }

    //RESPOSTAS DO CANDIDADO
    char respostas[n];

    printf("Entre com as suas respostas:");
    for(int i = 0; i < n; i++){
        printf("\n");
        scanf("%s", &respostas[i]);
    }

    //ENTRE COM O GABARITO
    char gabarito[n];

    printf("Entre com o gabarito:");
    for(int i = 0; i < n; i++){
        printf("\n");
        scanf("%s", &gabarito[i]);
    }

    int acertos = 0;
    for(int i = 0; i < n; i++){
        if(respostas[i] == gabarito[i]){
            acertos++;
        }
    }
    printf("%d\n", n);
    printf("GABARITO: %s\n", gabarito);
    printf("RESPOSTAS: %s\n", respostas);

    printf("SAIDA: %d", acertos);
    return 0;
}