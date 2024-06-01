#include <stdio.h>

int main(){

    struct  lista
    {
        int valor;
        struct lista *proximo; //Aponta a uma struct Lista, passando o endereço de memoria de outra struct LISTA
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0; //Aponta pra um ponteiro de valor nulo

    //Gancho inicialmente está apontando para m1, enquanto gancho n apontar pra uma struct nula, vá para o próximo item
    while(gancho != (struct lista *)0){
        printf("%i\n", gancho->valor);
        gancho = gancho->proximo;
    }
    
    getchar();
    return 0;
}