#include <stdio.h>
#include <locale.h>

int main(){
system("chcp 65001");
system("cls");
setlocale(LC_ALL, "Portuguese_Brasil");

int idade, anos, restodias, meses, dias;

//Entrada da idade, no formato de dias
printf("Entre com a idade (Em dias): ");
scanf("%d", &idade);

//Calculo de quantos anos exatos representa essa idade
anos = idade/365;

//Calculo de quantos dias sobram depois de x anos completos.
restodias = idade%365;

//Calculo dos meses
meses = restodias/30;

//Calculo dos dias 
dias = restodias%30;

//Imprimindo resultados
printf("Idade:\t %d \nAno(s):\t %d \nMeses:\t %d \nDias:\t %d \n", idade, anos, meses, dias);

return 0;
}