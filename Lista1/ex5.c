#include <stdio.h>
#include <locale.h>

int main(){
system("chcp 65001");
system("cls");
setlocale(LC_ALL, "Portuguese_Brasil");

//Declaração de Variáveis
int ovos, trigo, leite, maxOvos, maxTrigo, maxLeite;
int maxBolos;

//Requisição de valores
printf("Entre com a quantidade de xícaras de trigo: ");
scanf("%d", &trigo);

printf("Entre com a quantidade de Ovos: ");
scanf("%d", &ovos);

printf("Entre com a quantidade de Leite: ");
scanf("%d", &leite);

//Calculo de quantos bolos serão feitos com cada valor
maxTrigo = trigo/2;
maxOvos = ovos/3;
maxLeite = leite/5;

//Calculando qual o menor menor numero deles, que representará o máximo de bolos possíveis a serem feitos
if(maxTrigo < maxOvos){
    if(maxTrigo < maxLeite){
        maxBolos = maxTrigo;
    }
    else{
        maxBolos = maxLeite;
    }
}else{
    if(maxOvos < maxLeite){
        maxBolos = maxOvos;
    }
    else{
        maxBolos = maxLeite;
    }
}

    printf("A maior quantidade de bolos que será feita vai ser: %d", maxBolos);
    return 0;
}