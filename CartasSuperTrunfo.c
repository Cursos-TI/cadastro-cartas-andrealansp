#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declaração de variáveis utilizadas no ambiente
  char estado1[1], estado2[1];
  char cod_carta1[3],cod_carta2[2], nome_cidade1[50], nome_cidade2[50];
  int populacao1, populacao2, quantidade_pontos_turisticos1,quantidade_pontos_turisticos2;
  float area1, pib1, area2, pib2;

  //-------------------------------------------------------------

  // Instrução para cadastro da carta
  printf("SUPER TRUNFO\n");
  printf("\n Cadastre os dados das cartas utilizada no SUPER TRUNFO!\n");
  printf("\n");
  printf("---------------------------------------\n");
  printf("\n");
  printf("Informe os dados da primeira carta !\n");
  printf("\n");

  // Solicitando os dados da primeira carta
  printf("Informe a primeira letra do nome do estado:");
  scanf(" %s", &estado1);

  printf("Informe o código da carta: ");
  scanf(" %s", &cod_carta1);

  printf("Informe o nome da cidade: ");
  scanf(" %s", &nome_cidade1);

  printf("Entre com os dados populacionais: ");
  scanf(" %i", &populacao1);

  printf("Informe a área da Cidade: ");
  scanf(" %f", &area1);

  printf("Informe o PIB da Cidade: ");
  scanf(" %f", &pib1);

  printf("Infome a quantidade de pontos turísticos: ");
  scanf(" %i", &quantidade_pontos_turisticos1);
  printf("\n");

  // Exibindo dados cadastrados da primeira cidade.
  printf("\n");
  printf("---------------------------------------\n");
  printf("\n");

  printf("\nCarta1:\n");
  printf("\n ----------- \n"); 
  printf("Nome da Cidade: %s", nome_cidade1);
  printf("\n ----------- \n");  
  printf("Código da Carta: %s", cod_carta1);
  printf("\n ----------- \n");  
  printf("Poulação: %i", populacao1);
  printf("\n ----------- \n");  
  printf("Área: %.2f", area1);
  printf("\n ----------- \n");  
  printf("PIB: %.2f", pib1);
  printf("\n ----------- \n");  
  printf("Quantidade de Pontos Turísticos: %i \n", quantidade_pontos_turisticos1);

  printf("\n");
  printf("---------------------------------------\n");
  printf("\n");

  printf("Informe os dados da segunda carta !\n");

  // Solicitando os dados da Segunda carta
  printf("Informe a primeira letra do nome do estado:");
  scanf(" %s", &estado2);

  printf("Informe o código da carta: ");
  scanf(" %s", &cod_carta2);

  printf("Informe o nome da cidade: ");
  scanf(" %s", &nome_cidade2);

  printf("Entre com os dados populacionais: ");
  scanf(" %i", &populacao2);

  printf("Informe a área da Cidade: ");
  scanf(" %f", &area2);

  printf("Informe o PIB da Cidade: ");
  scanf(" %f", &pib2);

  printf("Infome a quantidade de pontos turísticos: ");
  scanf(" %i", &quantidade_pontos_turisticos2);
  printf("\n");
  
  printf("\n");
  printf("---------------------------------------\n");
  printf("\n");

  // Exibindo os dados cadastrados da carta2
  printf("Carta2:\n");
  printf("\n ----------- \n"); 
  printf("Nome da Cidade: %s", nome_cidade2);
  printf("\n ----------- \n");  
  printf("Código da Carta: %s", cod_carta2);
  printf("\n ----------- \n");  
  printf("Poulação: %i", populacao2);
  printf("\n ----------- \n");  
  printf("Área: %.2f", area2);
  printf("\n ----------- \n");  
  printf("PIB: %.2f", pib2);
  printf("\n ----------- \n");  
  printf("Quantidade de Pontos Turísticos: %i \n", quantidade_pontos_turisticos2);
  printf("\n");
return 0;
} 
