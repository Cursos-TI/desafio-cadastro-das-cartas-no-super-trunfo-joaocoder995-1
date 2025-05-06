#include <stdio.h>
 
int main (){
//carta01

char carta [20] = "carta 1\n";
char estado [10];
char codigocarta [10];
char nomecidade [10];
int populacao;
float area;

//apresenta do numero da carta
printf("%s\n", carta);

//estado
printf("Digite uma letra de 'A' a 'H' representando um estado: \n");
scanf("%s", &estado);
printf("Estado: %s \n", estado);

//codigo da carta
printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf("%s", &codigocarta); 
printf("Codigo: %s \n", codigocarta);

//nome da cidade
printf("Digite o nome da cidade: \n");
scanf("%s", &nomecidade);
printf("nome da cidade: %s\n", nomecidade);

//populacao
printf("O número de habitantes da cidade: ");
scanf("%d", &populacao);
printf("populacao: %d\n", populacao);

//area da cidade
printf(" Qual seria a area: ");
scanf("%f", &area);
printf("A area é: %.2f", area);
return 0;








}










