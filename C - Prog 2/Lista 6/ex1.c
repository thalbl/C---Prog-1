#include <stdio.h>
#include <stdlib.h>

int grava(FILE* pFile, int N){
    if(pFile == NULL || N <= 0){
        return -1;
    }
    
    for(int i = N; i >= 1; i--){
        fwrite(&i, sizeof(int), 1, pFile);
    }
    return N;
}

int* recupera(FILE* pFile){
    long sz = 0;
    fseek(pFile, 0, SEEK_END);
    sz = ftell(pFile);
    rewind(pFile);

    int *vector = (int*)malloc(sz);
    fread(vector, sz, 1, pFile);

    return vector;
}

void exibe_vetor(int *vetor, int N){
    if(vetor == NULL || N <= 0){
        return;
    }

    for(int i = 0; i < N; i++){
        printf("%d \t", vetor[i]);
    }
    printf("\n");
}

int modifica(FILE *pFile, int M) {
    if (pFile == NULL || M <= 0){ 
        return -1;
    }

    fseek(pFile, 0, SEEK_END);
    long size = ftell(pFile);
    rewind(pFile);

    int num_elements = size / sizeof(int);
    int *vetor = (int*)malloc(size);
    if (vetor == NULL) return -1;
    
    fread(vetor, sizeof(int), num_elements, pFile);

    for (int i = num_elements - M; i < num_elements; i++) {
        if (vetor[i] % 2 == 0) {
            vetor[i] *= 2;
        }
    }

    rewind(pFile);
    fwrite(vetor, sizeof(int), num_elements, pFile);

    free(vetor);

    return M;
}

void recupera_exibe(FILE* pFile){
    if (pFile == NULL){
        return;
    } 

    rewind(pFile);
    int num;

    while(fread(&num, sizeof(int), 1, pFile)){
        printf("%d \t", num);
    }
    printf("\n");

}

int main()
{
    FILE *pFile;
    int N, M, mod;
    char nome_arquivo[100];

    printf("Informe o nome do arquivo a ser criado: ");
    gets(nome_arquivo);
    printf("Informe um numero positivo: ");
    scanf("%d",&N);

    pFile = fopen (nome_arquivo , "wb+");
    if (!pFile){ printf("Erro na criacao do arquivo...");
        return -1;
    }

    if (grava(pFile, N)!=N){
        printf("Erro na gravacao do arquivo...");
        return -1;
    }

    int *vetor=recupera(pFile);
    if(vetor==NULL){
        printf("Erro na recuperacao de dados do arquivo...");
        return -1;
    }

    exibe_vetor(vetor,N);
    printf("Informe um numero positivo M correspondente a quantidade de valores a partir do final do arquivo que deseja alterar: "); 
    scanf("%d",&M);

    mod=modifica(pFile,M);
    if(mod==-1){
        printf("Valor de M fora do intervalo permitido...");
        return -1;
    }
    if(mod!=M){ printf("Erro de leitura e/ou gravacao no arquivo...");
        return -1;
    }
    recupera_exibe(pFile);
    fclose (pFile);

    free(vetor);
return 0;
}