/*Ponteiros
    -> guardam endereço de memória       
*/

#include <stdio.h>
int main (){
    int *i, j;
    i = &j;
    puts("Digite um numero inteiro:");
    scanf("%d", &j);
    printf("%d\n", *i);
    return 0;
}