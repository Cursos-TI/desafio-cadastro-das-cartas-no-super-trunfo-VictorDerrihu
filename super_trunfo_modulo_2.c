#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(0));

  // Carta 1 com valores fixos
  char country[20] = "Brasil";
  unsigned long int population = 212000000;
  float area = 8515767.049;
  float pib = 2179.41;
  int turistic_points =75;
  float population_density = (float)population / area;
  float pib_per_capita = pib / (float)population;
  float super_power = (float)population + area + pib + turistic_points + pib_per_capita + (1.0 / population_density);
  int score_1,score_2;

  // Carta 2 com valores fixos
  char country_2[20] = "País Rand";
  unsigned long int population_2 = rand() % 1000000;     
  float area_2 = rand() % 1000 + 1000;
  float pib_2 = rand() % 10000+10000;
  int turistic_points_2 = rand() % 100 + 1;
  float population_density_2 = (float)population_2 / area_2;
  float pib_per_capita_2 = pib_2 / (float)population_2;
  float super_power_2 = (float)population_2 + area_2 + pib_2 + turistic_points_2 + pib_per_capita_2 + (1.0 / population_density_2);

//  Escolha do usuário 

  int attribute_1, attribute_2;


// Cadastro para a Carta 1

  printf("\nCarta 1:\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",country,population,area,pib,turistic_points,population_density,pib_per_capita,super_power);

// Cadastro para a Carta 2


  printf("\nCarta 2:\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n\n\n\n",country_2,population_2,area_2,pib_2,turistic_points_2,population_density_2,pib_per_capita_2,super_power_2);

  // Escolha do primeiro atributo
  printf("Qual atributo deseja comparar ?\n");
  printf("1. Nome da cidade (Apenas Exibição)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade demográfica\n\n");

  printf("Digite o primeiro atributo: ");
    scanf("%d", &attribute_1);

  if (attribute_1 < 1 || attribute_1 > 5) {
    printf("Atributo inválido. Reinicie o programa.\n");
    return 0;
    }


    // Escolha do segundo atributo
  printf("\n\nQual outro atributo deseja comparar ?\n");
  printf("1. Nome da cidade (Apenas Exibição)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade demográfica\n\n");

  printf("Digite o segundo atributo: ");
    scanf("%d", &attribute_2);

  if (attribute_1 < 1 || attribute_2 > 5 || attribute_2 == attribute_1) {
        printf("Atributo inválido ou igual ao primeiro. Reinicie o programa.\n");
        return 0;
    }

// Primeira Rodada

  switch (attribute_1)
  {
  case 1 :
     printf("As cidades são : %s vs %s\n",country,country_2);

    break;
  case 2 : 
    printf("\n\n###Primeira Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : População\n");
    printf("Carta 1 - População : %li \n",population);
    printf("Carta 2 - População : %li \n",population_2);
  if (population > population_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (population < population_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   break;

   case 3 : 
    printf("\n\n###Primeira Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Área\n");
    printf("Carta 1 - Área : %f \n",area);
    printf("Carta 2 - Área : %f \n",area_2);
  if (area > area_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (area < area_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }

   break;

   case 4 : 
    printf("\n\n###Primeira Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : PIB\n");
    printf("Carta 1 - PIB : %f \n",pib);
    printf("Carta 2 - PIB : %f \n",pib_2);
  if (pib > pib_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (pib < pib_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   break;
   case 5 : 
    printf("\n\n###Primeira Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Número de pontos turísticos\n");
    printf("Carta 1 - Número de pontos turísticos : %d \n",turistic_points);
    printf("Carta 2 - Número de pontos turísticos : %d \n",turistic_points_2);
  if (turistic_points > turistic_points_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (turistic_points < turistic_points_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }

  break;
   case 6 : 
    printf("\n\n###Primeira Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Densidade demográfica\n");
    printf("Carta 1 - Densidade demográfica : %f \n",population_density);
    printf("Carta 2 - Densidade demográfica : %f \n",population_density_2);
  if (population_density_2 > population_density)
   {
    score_1=score_1++;
    printf("Resultado : A carta 1 venceu!\n");
  
   }
  else if (population_density_2 < population_density)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   
   
  break;
  default:
    printf("Opção inválida --------- X ");
    break;
  }

  // Segunda Rodada

  switch (attribute_2)
  {
  case 1 :
     printf("Os países são : %s vs %s\n",country,country_2);

    break;
  case 2 : 
    printf("\n##Segunda Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : População\n");
    printf("Carta 1 - População : %li \n",population);
    printf("Carta 2 - População : %li \n",population_2);
  if (population > population_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (population < population_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   break;

   case 3 : 
    printf("\n##Segunda Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Área\n");
    printf("Carta 1 - Área : %f \n",area);
    printf("Carta 2 - Área : %f \n",area_2);
  if (area > area_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (area < area_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }

   break;

   case 4 : 
    printf("\n##Segunda Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : PIB\n");
    printf("Carta 1 - PIB : %f \n",pib);
    printf("Carta 2 - PIB : %f \n",pib_2);
  if (pib > pib_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (pib < pib_2)
   {
    
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   break;
   case 5 : 
    printf("\n##Segunda Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Número de pontos turísticos\n");
    printf("Carta 1 - Número de pontos turísticos : %d \n",turistic_points);
    printf("Carta 2 - Número de pontos turísticos : %d \n",turistic_points_2);
  if (turistic_points > turistic_points_2)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (turistic_points < turistic_points_2)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }

  break;
   case 6 : 
    printf("\n##Segunda Rodada:\n");
    printf("Competidores : %s vs %s\n",country,country_2);
    printf("O Atributo escolhido : Densidade demográfica\n");
    printf("Carta 1 - Densidade demográfica : %f \n",population_density);
    printf("Carta 2 - Densidade demográfica : %f \n",population_density_2);
  if (population_density_2 > population_density)
   {

    printf("Resultado : A carta 1 venceu!\n");
    score_1=score_1++;
  
   }
  else if (population_density_2 < population_density)
   {
     printf("Resultado : A carta 2 venceu!\n");
     score_2=score_2++;
   } 
   else{
    printf("Resultado : EMPATE !");
   }
   
   
  break;
  default:
    printf("Opção inválida --------- X ");
    break;
  }

  // Resultado Final

  printf("\n### Resultado final: %s\n", 
       score_1 > score_2 ? "\nA carta 1 Venceu!" : 
       (score_1 < score_2 ? "\nA carta 2 Venceu!" : "Empate!"));


   return 0;
}
