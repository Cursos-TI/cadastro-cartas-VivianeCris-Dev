#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[50];
  char estado2[50];
  char codigo1[4], codigo2[4];
  char nomeDaCidade1[50], nomeDaCidade2[50];
  unsigned long int populacao1, populacao2;
  int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
  float area1, area2, pib1, pib2;
  float densidadePopulacional1, densidadePopulacional2;
  float inversoDensidade1, inversoDensidade2;
  float pibPerCapital1, pibPerCapital2;
  float superPoder1, superPoder2;

  // Área para entrada de dados para a carta 1

  printf("Digite o estado: \n");
  scanf("%s", &estado1);
  
  printf("Digite o código: \n");
  scanf("%s", &codigo1);
  
  printf("Digite o nome da cidade: \n");
  getchar();
  fgets(nomeDaCidade1, 50, stdin);
  
  printf("Informe a população: \n");
  scanf("%lu", &populacao1);

  printf("Informe a área: \n");
  scanf("%f", &area1);

  printf("Informe o PIB: \n");
  scanf("%f", &pib1);

  printf("Informe a quantidade de pontos turísticos: \n");
  scanf("%d", &numeroDePontosTuristicos1);

  // Área para calculo da carta 1
  
  densidadePopulacional1 = populacao1 / area1;
  inversoDensidade1 = 1 / densidadePopulacional1;
  pibPerCapital1 = pib1 / populacao1;
  superPoder1 = populacao1 + area1 + inversoDensidade1 + pib1 + pibPerCapital1 + numeroDePontosTuristicos1;
  
  // Área para entrada de dados para a carta 2
  
  printf("Digite o estado: \n");
  scanf("%s", &estado2);
  
  printf("Digite o código: \n");
  scanf("%s", &codigo2);
  
  printf("Digite o nome da cidade: \n");
  getchar();
  fgets(nomeDaCidade2, 50, stdin);
  
  printf("Informe a população: \n");
  scanf("%lu", &populacao2);
  
  printf("Informe a área: \n");
  scanf("%f", &area2);
  
  printf("Informe o PIB: \n");
  scanf("%f", &pib2);
  
  printf("Informe a quantidade de pontos turísticos: \n");
  scanf("%d", &numeroDePontosTuristicos2);
  
  // Área para calculo da carta 2
  
  densidadePopulacional2 = populacao2 / area2;
  inversoDensidade2 = 1 / densidadePopulacional2;
  pibPerCapital2 = pib2 / populacao2;
  superPoder2 = populacao2 + area2 + inversoDensidade2 + pib2 + pibPerCapital2 + numeroDePontosTuristicos2;
  
  // Área para exibição dos dados da cidade 1
  
  printf("\nCarta 1\n");
  printf("Estado: %s\n", &estado1);
  printf("Código: %s\n", &codigo1);
  printf("Nome Da Cidade: %s", nomeDaCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f Km\n", area1);
  printf("PIB: %.2f R$\n", pib1);
  printf("Números De Pontos Turísticos: %d\n", numeroDePontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional1);
  printf("PIB Per Capita: %.2f rais\n\n", pibPerCapital1);
  
  // Área para exibição dos dados da cidade 2
  
  printf("\nCarta 2\n");
  printf("Estado: %s\n", &estado2);
  printf("Código: %s\n", &codigo2);
  printf("Nome Da Cidade: %s", nomeDaCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f Km\n", area2);
  printf("PIB: %.2f R$\n", pib2);
  printf("Números De Pontos Turísticos: %d\n", numeroDePontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional2);
  printf("PIB Per Capita: %.2f reais\n\n", pibPerCapital2);

  // Área para comparação das cartas

  printf("\nComparação Das Cartas:\n");
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Pontos Turísticos: %d\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2);
  printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
  printf("PIB Per Capita: %d\n", pibPerCapital1 > pibPerCapital2);
  printf("Super Poder: %d\n\n", superPoder1 > superPoder2);
  
return 0;
} 
