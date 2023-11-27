/*Este programa imprime os primeiros x numeros que são multiplos de a ou b.
Temos a função main -> ENTRADA: Quantidade de multiplos a serem exibidos e os numeros a descobrir se são multiplos deles.
                        SAÍDA: a função chama outra função a multiplo.]

A função multiplo recebe como parametros q = multiplos a serem exibidos, x = primeiro numero e y = segundo numero, usa a função 
ehMultiplo pra descobrir se um numero é multiplo de outro e então imprime caso for.
*/

#include <stdio.h>
#include <locale.h>

// Verifica se r é múltiplo de s
// Retorna 1 se sim; 0 caso contrário
int ehMultiplo(int r, int s){
    int multiplo = r%s;
    if(multiplo == 0){
        return 1;
    }else{
        return 0;
    }
}


// Imprime os q primeiros números múltiplos de x ou de y
void multiplo(int q, int x, int y){
    int i = 0, count = 0;

    while(count < q){
        if ((ehMultiplo(i, x) || ehMultiplo(i, y)) == 1){
            printf("%d ", i);
            count++;
        }
        i++;
    }
}

int main(){
system("chcp 65001");
system("cls");
setlocale(LC_ALL, "Portuguese_Brasil");

    int n, a, b;
    while(1){
        printf("Entre com a quantidade de multiplos: \t");
        scanf("%d", &n);

        if(n == 0){
            printf("Escolha outro número: \t \n");
        }
        else{
            printf("Entre com o primeiro natural: \t");
            scanf("%d", &a);

            printf("Entre com o segundo natural: \t");
            scanf("%d", &b);

            multiplo(n, a, b);
            break;
        }
    }
}

