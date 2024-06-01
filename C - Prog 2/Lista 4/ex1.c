#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nomeArquivo[100];
    scanf("%c", &nomeArquivo);
    FILE *fptr;
    int countA, countE, countI, countO, countU;
    fptr = fopen(nomeArquivo, "r");
    if(fptr == NULL){
        printf("Arquivo nao aberto.");
        exit(1);
    }  

    

    while(!feof(fptr)){
        char letra = fgetc(fptr);
        
        if(letra == 'A' || letra == 'a'){
            countA++;
        }
        else if(letra == 'E' || letra == 'e'){
            countE++;
        }
        else if(letra == 'I' || letra == 'i'){
            countI++;
        }
        else if(letra == 'O' || letra == 'o'){
            countO++;
        }
        else if(letra == 'U' || letra == 'u'){
            countU++;
        }
    }
    printf("a\t%d\n", countA);
    printf("e\t%d\n", countE);
    printf("i\t%d\n", countI);
    printf("o\t%d\n", countO);
    printf("u\t%d\n", countU);
}   