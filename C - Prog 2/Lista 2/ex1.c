#include <stdio.h>

int main (void)
{
    //O que está acontecendo é, o ponteiro está referenciando ao endereço x, exemplo 2131231, e logo após, está modificando
    //o valor que está nesse endereço para o valor de y
    //O * na frente do asterisco significa que você está alterando o VALOR que o ponteiro está apontando
    //Sem o asterisco, estamos referenciando o ENDEREÇO que o ponteiro está apontando
    
    //Para usarmos struct, se quisermos modificar um dos itens de uma já existente, devemos por simplesmente
    //ponteiro-><atributo da struct que apontamos>, que funciona como uma "abreviação" de (*<ponteiro>).<struct>

    int somatorio = 100;
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, antes, *depois;

    depois = &agora; //endereço de memoria
    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;
    
    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;


    // ----------------------------------------------------------####-------------------------------------------

    //Funções com ponteiros como parametro
   