/*Este programa imprime uma figura em formato de piramide, dada uma certa quantidade de linhas

ENTRADA: A principio a função principal recebe apenas a entrada da quantidade de linhas que você quer que sua piramide tenha 
e se um valor para decidir se a piramide será normal ou inversa. Depois disso, chamamos a função ARVORE
Verificamos se o valor de linha é maior que 10(caso for, o código pede para você inserir outro numero)

A função arvore recebe dois parametros(linha e invertida)
Logo depois disso, entramos em um loop for para a geração de cada linha. Dentro deste for, temos mais dois for para imprimir
cada " " ou "*".
A maneira que isto ocorre é simples, o primeiro for (o de impressão do espaço) ele segue a seguinte lógica: 
    O espaço começa por 1 e repete a quantidade de vezes de linhas - num ou seja
        -Caso o usuario peça 5 linhas, a primeira linha será 5-1 = 4 --> quantidade de espaços a serem 
        impressos na primeira linha, o mesmo acontece pras outras.

    A estrela começa da posição 1 até 2 vezes a linha atual - 1, para cada loop deste for, o valor da coluna 
    será incrementada em 1.
        -Para o primeira iteração, 2*1 - 1 é 1 então iremos imprimir apenas uma estrela
        -Para a segunda iteração, 2*2 - 1 é 3 então iremos imprimir três estrelas. E por aí vai

    Caso invertida for diferente de 0 realiza o inverso.

*/
#include <stdio.h>
#include <locale.h>

int main(){
system("chcp 65001");
system("cls");
setlocale(LC_ALL, "Portuguese_Brasil");
    
    int linhas, valor;

    while (1){
        printf("Entre com a quantidade de linhas que você quer que seja exibida e um valor:");
        scanf("%d %d", &linhas, &valor);
        if(linhas<=10){
            arvore(linhas, valor);
            break;
        }
        else{
            printf("Não é permitido que o numero de linhas seja maior que 10, insira outro numero. \n \n");
        }
    }

    
}

void arvore(int linhas, int invertida){

    int colunas, espaco, num;
    
        if(invertida == 0){
            for(num = 1; num <= linhas; num++){
                for(espaco = 1; espaco <= (linhas-num); espaco++){
                    printf(" ");
                }

                for(colunas = 1; colunas<= (2*num-1); colunas++){
                    printf("*");
                }
                printf("\n");
            }
        }else{
                for(num = linhas; num >= 1; num--){
                    for(espaco = linhas-num; espaco > 0; espaco--){
                        printf(" ");
                    }

                    for(colunas =  (2*num-1); colunas> 0; colunas--){
                        printf("*");
                    }
                    printf("\n");
                }
        }
}
    
