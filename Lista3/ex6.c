#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[20];
    int idade;
    float peso;
};


int main(){
    struct Pessoa vetorPessoa[50];
    int numeroPessoas;
    
    printf("Entre com o numero de pessoas:\t \n");
    scanf("%d", &numeroPessoas);

    for(int i = 0; i < numeroPessoas; ++i){
        printf("Nome da pessoa %d:\t", i+1);
        scanf("%s", vetorPessoa[i].nome);

        printf("Idade da pessoa %d:\t", i+1);
        scanf("%d", &(vetorPessoa[i].idade));//Passagem de dados int e float para um vetor de um struct funciona pelo endereço(&), 
        //não é necessário fazer isso com string pois elas já são passagens por referencia.

        printf("Peso da pessoa %d:\t", i+1);
        scanf("%f", &(vetorPessoa[i].peso));
        }

        //Apenas para verificar se foi inserido os dados no vetor
        printf("\nDados das Pessoas:\n");
            for (int i = 0; i < numeroPessoas; ++i) {
        printf("Pessoa %d - Nome: %s, Idade: %d, Peso: %.2f\n", i + 1, vetorPessoa[i].nome, vetorPessoa[i].idade, vetorPessoa[i].peso);
    }

         //Ordenando -> Bubble sort
        const int FALSO = 0;
        int ordenado = FALSO;
        int fim = numeroPessoas;
        while(!ordenado){
            ordenado = 1;
            for(int i = 0; i < fim - 1; i++){
                if(vetorPessoa[i].idade < vetorPessoa[i+1].idade){
                    struct Pessoa aux = vetorPessoa[i];
                    vetorPessoa[i] = vetorPessoa[i+1];
                    vetorPessoa[i+1]= aux;
                    ordenado = FALSO;
                }
            } fim--;
        }

        for(int i = 0; i < numeroPessoas; i++){
             printf("\n ORDENADO DECRESCENTE: \n Pessoa %d - Nome: %s, Idade: %d, Peso: %.2f\n", i + 1, vetorPessoa[i].nome, vetorPessoa[i].idade, vetorPessoa[i].peso);
        }


        //idade a pesquisar
        int idadePesquisa;
        printf("Entre com a idade desejada:\t");
        scanf("%d", &idadePesquisa);

        int idadeExiste = existe(vetorPessoa, numeroPessoas, idadePesquisa);

        if(idadeExiste != -1){
            printf("IDADE EXISTE NA POSIÇÃO: %d\n", idadeExiste + 1);
            printf("Pessoa - Nome: %s, Idade: %d, Peso: %.2f\n", vetorPessoa[idadeExiste].nome, vetorPessoa[idadeExiste].idade, vetorPessoa[idadeExiste].peso);
        }
        else{
            printf("IDADE NÃO EXISTE");
        }
        
}  

int existe(struct Pessoa vetorOrdenado[], int numeroPessoas, int idadeAchar){
    int ini = 0, fim = numeroPessoas - 1, meio;
    while(ini <= fim){
        meio = (ini + fim)/2;
        if(idadeAchar == vetorOrdenado[meio].idade){
            return meio;
        }
        if(idadeAchar > vetorOrdenado[meio].idade){
            fim = meio - 1;
        }
        else{
            ini = meio + 1;
        }
    }
    return -1;
}
