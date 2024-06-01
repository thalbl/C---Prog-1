#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _func{
    char nome[40];
    int ano_nasc;
    float renda;
}Tfunc ;

void * inicializa (Tfunc *cadastro, int funcionarios);
void * inclui_novos(Tfunc *, int, int);
void imprime (Tfunc *, int, int);

int main(void)
{
    Tfunc *cadastro;
    int funcionarios, adicionais;

    printf("Quantos funcionarios? ");
    scanf("%d",&funcionarios);
    cadastro=inicializa(cadastro, funcionarios);

    if (!cadastro)
        return -1;
    
    printf("Quantos funcionarios a mais deseja adicionar? ");
    scanf("%d",&adicionais);
    cadastro = inclui_novos(cadastro, funcionarios, adicionais);
    if (!cadastro)
            return -1;
    printf("Lista de funcionarios cadastrados\n");
    imprime(cadastro, 0, funcionarios+adicionais);
    free(cadastro);
    return 0;
}

void * inicializa (Tfunc *cadastro, int funcionarios){
    cadastro = (Tfunc *)malloc(funcionarios * sizeof(Tfunc));
    if(!cadastro){
        printf("Erro de alocacao de memoria");
        return NULL;
    }

    for(int i = 0; i < funcionarios; i++){
        printf("Nome: ");
        scanf("%s", cadastro[i].nome);

        printf("Nascimento: ");
        scanf("%d", &cadastro[i].ano_nasc);

        printf("Renda: ");
        scanf("%f", &cadastro[i].renda);
    }
    printf("Cadastro feito com sucesso!");
    return cadastro;
}

void * inclui_novos(Tfunc *cadastro, int funcionarios, int adicionais){
    cadastro = (Tfunc *)realloc(cadastro, (funcionarios + adicionais) * sizeof(Tfunc));

    if(!cadastro){
        printf("Erro de alocacao de memoria");
        return NULL;
    }

    for(int i = funcionarios; i < funcionarios + adicionais; i++){
        printf("Nome: ");
        scanf("%s", cadastro[i].nome);

        printf("Nascimento: ");
        scanf("%d", &cadastro[i].ano_nasc);

        printf("Renda: ");
        scanf("%f", &cadastro[i].renda);
    }
    printf("Cadastro feito com sucesso!\n");
    return cadastro;
}

void imprime (Tfunc *cadastro, int inicio, int fim){
    for (int i = inicio; i < fim; i++){
        printf("Nome: %s, Ano de Nascimento: %d, Renda: %.2f\n", cadastro[i].nome, cadastro[i].ano_nasc, cadastro[i].renda);
    }
}