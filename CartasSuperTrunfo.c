#include <stdio.h>
 
int main (){
//carta01

char carta [20] = "carta 1\n";
char estado [20];
char codigocarta [20];
char nomecidade [20];
int populacao;
int pontosturisticos;
float area;
float pib;
//apresenta do numero da carta
printf("%s", carta);

//estado
printf("Digite uma letra de 'A' a 'H' representando um estado: \n");
scanf("%s", estado);


//codigo da carta
printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf("%s", codigocarta); 


//nome da cidade
printf("Digite o nome da cidade: \n");
scanf("%s", nomecidade);


//populacao
printf("O número de habitantes da cidade: \n");
scanf("%d", &populacao);


//area da cidade
printf(" Qual seria a area: \n");
scanf("%f", &area);


//PIB da cidade
printf("Qual o Produto Interno Bruto da cidade: \n");
scanf("%f", &pib);


//pontos turisticos 
printf("Quantos pontos turisticos existem: \n");
scanf("%d", &pontosturisticos);


//CARTA 01 RESPOSTAS 

printf("Estado: %s \n", estado);
printf("Codigo: %s \n", codigocarta);
printf("nome da cidade: %s\n", nomecidade);
printf("populacao: %d\n", populacao);
printf("A area é: %.2f\n", area);
printf("O PIB é: %.2f\n", pib);
printf("pontos turisticos sao: %d \n", pontosturisticos);





//CARTA02
char carta2 [20] = "carta 2\n";
char estado2 [10];
char codigocarta2 [10];
char nomecidade2 [10];
int populacao2;
int pontosturisticos2;
float area2;
float pib2;

//apresenta do numero da carta 2
printf("%s\n", carta2);

//estado 2
printf("Digite uma letra de 'A' a 'H' representando um 2 estado: \n");
scanf("%s", estado2);


//codigo da carta 2
printf("A letra do 2 estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf("%s", codigocarta2); 


//nome da cidade 2
printf("Digite o nome da 2 cidade: \n");
scanf("%s", nomecidade2);


//populacao 2
printf("O número de habitantes da cidade 2 é: \n");
scanf("%d", &populacao2);


//area da cidade 2
printf(" Qual seria a 2 area: \n");
scanf("%f", &area2);


//PIB da cidade 2
printf("Qual o Produto Interno Bruto da 2 cidade: \n");
scanf("%f", &pib2);


//pontos turisticos 2
printf("Quantos pontos turisticos existem na segunda cidade: \n");
scanf("%d", &pontosturisticos2);


//CARTA 02 RESPOSTAS 

printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigocarta2);
printf("nome da cidade: %s\n", nomecidade2);
printf("populacao: %d\n", populacao2);
printf("A area é: %.2f\n", area2);
printf("O PIB é: %.2f\n", pib2);
printf("pontos turisticos sao: %d\n", pontosturisticos2);

return 0;








}









