#include <stdio.h>

int main() {
    
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[28], estado2[28], codcarta1[20], codcarta2[20], cidade1[20], cidade2[20];
int populacao1, populacao2, pontos1, pontos2;
float area1, area2, pib1, pib2;
float dens1, dens2, pibcap1, pibcap2;
    
  // Introdução
printf("\n------------------- SUPER TRUNFO -------------------\n");

printf("Seja bem-vindo!\nAntes de começarmos, que tal criarmos suas 2 primeiras cartas? Vamos lá!!\n");

  // Carta 1  

  printf("\nVamos começar, escolha seu ESTADO para a 1° Carta: ");
  scanf(" %28[^\n]", estado1);
  printf("\nÓtimo! Agora escolha o código da sua carta contendo uma letra e dois números(A01, A02, A03, etc...): ");
  scanf(" %s", &codcarta1);
  printf("\nEscolha uma cidade do seu estado: ");
  scanf(" %20[^\n]", cidade1);
  printf("\nQual a população total da sua cidade?: ");
  scanf(" %d", &populacao1);
  printf("\nQual a área total da sua cidade? (em km²): ");
  scanf(" %f", &area1);
  printf("\nQual o PIB da sua cidade? (Em BILHÕES): ");
  scanf(" %f", &pib1);
  printf("\nQuantos pontos turisticos sua cidade possui?: ");
  scanf(" %d", &pontos1);

  dens1 = populacao1 / area1;
  pibcap1 = pib1 / (float)populacao1;

  printf("\n--------------------------------------------------------\n");

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
  printf("\nQual a área total da sua cidade? (em km²): ");
  scanf(" %f", &area2);
  printf("\nQual o PIB da sua cidade? (Em BILHÕES): ");
  scanf(" %f", &pib2);
  printf("\nQuantos pontos turisticos sua cidade possui?: ");
  scanf(" %d", &pontos2);

  dens2 = populacao2 / area2;
  pibcap2 = pib2 / populacao2;

  printf("\n--------------------------------------------------------\n");

  // Exibição dos dados

  printf("\nÓtimo! Essas são as suas 2 cartas:\n");

  double poder1 = (populacao1 + area1 + pib1 + pontos1 + pibcap1) / dens1;

  printf("\n--- 1° Carta ---\nEstado = %s \nCódigo = %s \nCidade = %s \nPopulação total = %d habitantes \nÁrea total = %.0fkm² \nPIB = %.0f bilhões de reais \nPontos turisticos = %d", estado1, codcarta1, cidade1, populacao1, area1, pib1 / 1e9, pontos1);
  printf("\nDensidade Populacional = %.2f hab/km²", dens1);
  printf("\nPIB per Capita = %.0f reais\n", pibcap1);

  printf("\nPoder total = %.0f\n", poder1);

  //------------------------------------------------------

  double poder2 = (populacao2 + area2 + pib2 + pontos2 + pibcap2) / dens2;

  printf("\n--- 2° Carta ---\nEstado = %s \nCódigo = %s \nCidade = %s \nPopulação total = %d habitantes \nÁrea total = %.0fkm² \nPIB = %.0f bilhões de reais \nPontos turisticos = %d", estado2, codcarta2, cidade2, populacao2, area2, pib2 / 1e9, pontos2);
  printf("\nDensidade Populacional = %.2f hab/km²", dens2);
  printf("\nPIB per Capita = %.0f reais\n", pibcap2);

  printf("\nPoder total = %.0f\n", poder2);

  printf("\n--------------------------------------------------------\n");

  // Comparações

  int respop, resarea, respib, responto, resdens, respibcap, respoder;

  respop = populacao1 > populacao2; // se = 1, carta 1(pop1) ganha
  resarea = area1 > area2;
  respib = pib1 > pib2; 
  responto = pontos1 > pontos2;
  resdens = dens1 < dens2; // densidade menor ganha, por isso <
  respibcap = pibcap1 > pibcap2;
  respoder = poder1 > poder2;

  printf("\nAgora vamos para as comparações!\n");
  printf("\nSe resultado for = 1, Carta 1 vence! Caso resultado for = 0, Carta 2 vence! Vamos lá ;)\n");

  printf("\nPopulação: %d", respop);
  printf("\nÁrea: %d", resarea);
  printf("\nPIB: %d", respib);
  printf("\nQuantidade de pontos turísticos: %d", responto);
  printf("\nDensidade populacional: %d", resdens);
  printf("\nPIB per capita: %d", respibcap);
  printf("\nPoder total: %d", respoder);

  printf("\n--------------------------------------------------------\n");

return 0;

} 