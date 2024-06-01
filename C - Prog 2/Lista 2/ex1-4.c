#include <stdio.h>

 struct lista
    {
        int valor;
        struct lista *proximo; //Aponta a uma struct Lista, passando o endereço de memoria de outra struct LISTA
    };

//retorna um endereço de tipo struct lista
struct lista *procurarValor(struct lista *pLista, int valor){
    while(pLista != (struct lista *)0){
        if(pLista->valor == valor){
            //verifica se o valor é o mesmo que o usuário quer achar
            return(pLista);
        }else{
            ///se não for, passa para o próximo valor
            pLista = pLista->proximo;
        }
    }
    //Caso não ache nada, retorna uma lista nulo
    return(struct lista *)0;
}

int main(){
    int valor;
    struct lista *procurarValor(struct lista *pLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;


    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 20;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;

    printf("Digite o valor de pesquisa: ");
    scanf("%i", &valor);
    resultado = procurarValor(gancho, valor);
    
    if(resultado == (struct lista *)0){
        printf("Não encontrado");
    }else{
        printf("Valor: %i", resultado->valor);
    }
    
    system("pause");
    return 0;
}