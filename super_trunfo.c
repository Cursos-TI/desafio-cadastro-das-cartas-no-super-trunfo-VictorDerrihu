#include <stdio.h>

int main(){

  // Declaração das variáveis dos valores utilizados na carta 1

  char state;
  char cod[3]; 
  char city_name[20];
  unsigned long int population;
  float area;
  float pib;
  int turistic_points;
  float population_density;
  float pib_per_capita;
  float super_power;

  // Declaração das variáveis dos valores utilizados na carta 2;

  char state_2;
  char cod_2[3];
  char city_name_2[20];
  unsigned long int population_2;
  float area_2;
  float pib_2;
  int turistic_points_2;
  float population_density_2;
  float pib_per_capita_2;
  float super_power_2;

  // Cadastro da Carta 1

  printf("Olá , seja bem vindo ao nosso Super Trunfo!\nVamos Cadastrar a Carta 1 :\n\n");

  printf("Qual é o estado da cidade?\n");
  scanf(" %c",&state);

  printf("Qual é o código da carta?\n");
  scanf("%s",cod);

  printf("Qual é o nome da cidade?\n");
  scanf("%s",city_name);

  printf("Qual é o número da população desta cidade?\n");
  scanf("%lu",&population);

  printf("Qual é a àrea da cidade?\n");
  scanf("%f",&area);

  printf("Qual é o PIB da cidade?\n");
  scanf("%f",&pib);

  printf("Qual é o número de pontos túristicos da cidade?\n");
  scanf("%d",&turistic_points);

  // Cálculos da Carta 1

  population_density = (float) population / area;
  pib_per_capita = pib / (float) population;
  super_power = (float)population + area + pib + turistic_points + pib_per_capita + (1.0 / population_density);


  printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",state,cod,city_name,population,area,pib,turistic_points,population_density,pib_per_capita,super_power);

  // Cadastro para a Carta 2
  printf("\n\nAgora nós vamos cadastrar a Carta 2 :\n");

  printf("Qual é o estado da cidade?\n");
  scanf(" %c",&state_2);

  printf("Qual é o código da carta?\n");
  scanf("%s",cod_2);

  printf("Qual é o nome da cidade?\n");
  scanf("%s",city_name_2);

  printf("Qual é o número da população desta cidade?\n");
  scanf("%lu",&population_2);

  printf("Qual é a àrea da cidade?\n");
  scanf("%f",&area_2);

  printf("Qual é o PIB da cidade?\n");
  scanf("%f",&pib_2);

  printf("Qual é o número de pontos túristicos da cidade?\n");
  scanf("%d",&turistic_points_2);

  // Cálculos da Carta 2

  population_density_2 = (float) population_2 / area_2;
  pib_per_capita_2 = pib_2  / (float) population_2;
  super_power_2 = (float)population_2 + area_2 + pib_2 + turistic_points_2 + pib_per_capita_2 + (1.0 / population_density_2);

  printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",state_2,cod_2,city_name_2,population_2,area_2,pib_2,turistic_points_2,population_density_2,pib_per_capita_2,super_power_2);


  //  Resultado 

  printf("\nComparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", population > population_2);
  printf("Área: Carta 1 venceu (%d)\n", area > area_2);
  printf("PIB: Carta 1 venceu (%d)\n", pib > pib_2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistic_points > turistic_points_2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", population_density < population_density_2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita_2);
  printf("Super Poder: Carta 1 venceu (%d)\n", super_power > super_power_2);    
  
   return 0;
}
