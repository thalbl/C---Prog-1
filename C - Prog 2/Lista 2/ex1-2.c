#include <stdio.h>
#include <stdlib.h>

int main(){
     void testeVariavel(int x);
    void testePonteiro(int *pX);
    
    int teste = 1;
    int *pTeste = &teste;

    //testeVariavel(teste);
    testePonteiro(pTeste); //Recebe o endereço de memoria

    printf("%i", teste);
    return 0;

}

void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
}
