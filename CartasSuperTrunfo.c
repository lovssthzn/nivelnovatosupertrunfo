#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[28], estado2[28];
char codcarta1[20], codcarta2[20];
char cidade1[20], cidade2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

printf("Seja bem-vindo!\nAntes de começarmos, que tal criarmos suas 2 primeiras cartas? Vamos lá!!\n");

  // Área para entrada de dados  

  printf("\nVamos começar, escolha seu ESTADO para a 1° Carta: ");
  scanf(" %28[^\n]", estado1);

  printf("\nÓtimo! Agora escolha o código da sua carta contendo uma letra e dois números(A01, A02, A03, etc...): ");
  scanf(" %s", &codcarta1);

  printf("\nEscolha uma cidade do seu estado: ");
  scanf(" %20[^\n]", cidade1);
  
  printf("\nQual a população total da sua cidade?: ");
  scanf(" %d", &populacao1);

  printf("\nQual a área total da sua cidade?: ");
  scanf(" %f", &area1);

  printf("\nQual o PIB da sua cidade?: ");
  scanf(" %f", &pib1);

  printf("\nQuantos pontos turisticos sua cidade possui?: ");
  scanf(" %d", &pontos1);

  // Carta 2
  printf("\nMuito bem! Agora vamos para a 2° Carta!!\n");

  printf("\nEscolha seu ESTADO para a 2° Carta: ");
  scanf(" %28[^\n]", estado2);

  printf("\nEscolha o código da sua carta contendo uma letra e dois números(A01, A02, A03, etc...): ");
  scanf(" %s", &codcarta2);

  printf("\nEscolha uma cidade do seu estado: ");
  scanf(" %20[^\n]", cidade2);
  
  printf("\nQual a população total da sua cidade?: ");
  scanf(" %d", &populacao2);

  printf("\nQual a área total da sua cidade?: ");
  scanf(" %f", &area2);

  printf("\nQual o PIB da sua cidade?: ");
  scanf(" %f", &pib2);

  printf("\nQuantos pontos turisticos sua cidade possui?: ");
  scanf(" %d", &pontos2);

  // Área para exibição dos dados da cidade

  printf("\nÓtimo! Essas são as suas 2 cartas:\n");

  printf("\n1° Carta \nEstado = %s \nCódigo = %s \nCidade = %s \nPopulação total = %d \nÁrea total = %.2fm² \nPIB = R$ %.2f \nPontos turisticos = %d \n", estado1, codcarta1, cidade1, populacao1, area1, pib1, pontos1);
  printf("\n2° Carta \nEstado = %s \nCódigo = %s \nCidade = %s \nPopulação total = %d \nÁrea total = %.2fm² \nPIB = R$ %.2f \nPontos turisticos = %d \n", estado2, codcarta2, cidade2, populacao2, area2, pib2, pontos2);

return 0;

} 
