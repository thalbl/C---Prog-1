#include <stdio.h>

typedef struct{
    int idade;
    float peso;
}Pessoa;

int main(){
    Pessoa pessoasVet[50];
    int numeroPessoas; 
    printf("Entre com o quantidade de pessoas: ");
    scanf("%d", &numeroPessoas);

    for(int i = 0; i < numeroPessoas; i++){
        printf("PESSOA %d\n", i);
        printf("IDADE e PESO");
        scanf("%d %f", pessoasVet[i].idade, pessoasVet[i].peso);
    }
    
    int ordenado = 0;//declara flag
    int fim = numeroPessoas;
    while(!ordenado){ //enquanto flag é 0
        ordenado = 1; //quando acaba o for e ele não faz o if, acaba o while.
        for(int i = 0; i < fim - 1; i++){ //percorre vetor até o fim
            if(pessoasVet[i].peso > pessoasVet[i+1].peso){//verifica se o peso[0] é maior que peso [1]
                Pessoa aux = pessoasVet[i];//variavel auxiliar pra pegar valor maior
                pessoasVet[i] = pessoasVet[i+1]; //[0] pega o valor menor que ele([1])
                pessoasVet[i+1] = aux; //[1] pega o valor de [0]
                ordenado = 0; //não estava ordenado.
            }
        }fim--;
    }

    int idadePesquisa;
        printf("Entre com o idade desejado:\t");
        scanf("%d", &idadePesquisa);

    int idadeExiste = existeIdade(pessoasVet, numeroPessoas, idadePesquisa);
    if(idadeExiste == -1){
        printf("Peso existe");
    }
    else{
        printf("N existe");
    }
}

existeIdade(Pessoa vetorPessoa[], int numPessoas, int idadeAVer){
    int ini = 0, fim = numPessoas, meio;
    while(ini <= fim){
        meio = (ini + fim)/2;
        if(idadeAVer == vetorPessoa[meio].idade){
            return meio;
        }
        if(idadeAVer < vetorPessoa[meio].idade){
            fim = meio - 1;
        }
        else{
            ini = meio + 1;
        }
    }
    return -1;
}
    