#include <stdio.h>

int main() {
  // Declaração de variáveis utilizadas no ambiente
  char estado1[1], estado2[1];
  char cod_carta1[3],cod_carta2[2], nome_cidade1[50], nome_cidade2[50];
  int populacao1, populacao2, quantidade_pontos_turisticos1,quantidade_pontos_turisticos2;
  float area1, pib1, area2, pib2, 
  densidade_populacional1, densidade_populacional2,
  pib_percapita1, pib_percapita2, super_poder1, super_poder2 ;
  

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

  densidade_populacional1 = populacao1 / area1;
  pib_percapita1 = pib1 / populacao1;


  printf("\nCarta1:\n");
  printf("\n ----------- \n"); 
  printf("Nome da cidade: %s", nome_cidade1);
  printf("\n ----------- \n");  
  printf("Código da carta: %s", cod_carta1);
  printf("\n ----------- \n");  
  printf("Poulação: %i", populacao1);
  printf("\n ----------- \n");  
  printf("Densidade populacional: %.2f", densidade_populacional1);
  printf("\n ----------- \n");  
  printf("Pib per capita: %.2f", pib_percapita1);
  printf("\n ----------- \n");  
  printf("Área: %.2f", area1);
  printf("\n ----------- \n");  
  printf("PIB: %.2f", pib1);
  printf("\n ----------- \n");  
  printf("Quantidade de pontos turísticos: %i \n", quantidade_pontos_turisticos1);

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

   densidade_populacional2 = populacao2 / area2;
   pib_percapita2 = pib2 / populacao2;

  printf("Carta2:\n");
  printf("\n ----------- \n"); 
  printf("Nome da Cidade: %s", nome_cidade2);
  printf("\n ----------- \n");  
  printf("Código da Carta: %s", cod_carta2);
  printf("\n ----------- \n");  
  printf("Poulação: %i", populacao2);
  printf("\n ----------- \n");  
  printf("Densidade populacional: %.2f", densidade_populacional1);
  printf("\n ----------- \n");  
  printf("Pib per capita: %.2f", pib_percapita2);
  printf("\n ----------- \n");  
  printf("Área: %.2f", area2);
  printf("\n ----------- \n");  
  printf("PIB: %.2f", pib2);
  printf("\n ----------- \n");  
  printf("Quantidade de Pontos Turísticos: %i \n", quantidade_pontos_turisticos2);
  printf("\n");

  // calculando o super poder das cartas

  super_poder1 = (float)populacao1 + (float)quantidade_pontos_turisticos1 + area1 + pib1 + pib_percapita1 + (1/densidade_populacional1) ;
  super_poder1 = (float)populacao2 + (float)quantidade_pontos_turisticos2 + area2 + pib2 + pib_percapita2 + (1/densidade_populacional2);

  printf("Vamos ver quem ganhou !!!");

  //Calculando Resultados: 
  int resultadoPopulacao = populacao1>populacao2;
  int resultadoArea = area1 > area2;
  int resultadoPib = pib1 > pib2;
  int resultadoPontosTuristicos = quantidade_pontos_turisticos1 > quantidade_pontos_turisticos2;
  int resultadoDen = densidade_populacional1 < densidade_populacional2;
  int resultadoPibPercapita = pib_percapita1 > pib_percapita2;
  int resultadoSuperPoder = super_poder1 > super_poder2;

  printf("\nComparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", 2 - resultadoPopulacao, resultadoPopulacao);
  printf("Área: Carta %d venceu (%d)\n", 2 - resultadoArea, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", 2 - resultadoPib, resultadoPib);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultadoPontosTuristicos, resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultadoDen, resultadoDen);
  printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultadoPibPercapita, resultadoPibPercapita);
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultadoSuperPoder, resultadoSuperPoder);

  

return 0;


} 
