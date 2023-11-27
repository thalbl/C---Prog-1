#include <stdio.h>
#include <string.h>

int totalLetra(char texto[], char letra);

int main(){
    char frase[50];
    char letra;

    
    puts("Entre com uma palavra ou frase: \t");
    fgets(frase, 50, stdin); //Vetor já é uma referencia, não se passa o & antes
    //usando fgets para poder ler a string completa e de maneira segura sem risco de buffer overflow. 


    printf("Qual letra? \t");
    scanf(" %c", &letra);
    
    
    //Só para checar se frase está sendo lida corretamente
    printf(frase, "\n"); 

    printf("Tem no total %d letras", totalLetra(frase, letra));   
    return 0;
}


int totalLetra(char texto[], char letra){   
    //contador para guardar quantas vezes a letra aparece
    int countLetra = 0;

    //verifica o tamanho da string (size_t melhor que int)
    size_t tamanho = strlen(texto);

    //for que percorre o tamanho da string e a cada iteração verifica se o caracter
    //no indice i de texto é igual a letra que queremos, se sim, há incremento.
    for (int i = 0; i < tamanho; i++){
        if(texto[i] == letra){
            countLetra++;
        }
        else{
            continue;
        }
    }
    return countLetra;
}

