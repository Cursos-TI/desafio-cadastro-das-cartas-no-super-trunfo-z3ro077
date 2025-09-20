#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis impostas

    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    char estado1[50], estado2[50];
    char codigo1[04], codigo2[04];
    float pib1, pib2;
    float densidade1, densidade2;
    float area1, area2;
    float pibc1, pibc2;
    int pontos1, pontos2;
    float super1, super2;

    // Titulo
    printf("\n---- Carta1 ----\n");

    // Entrada e Saída de Dados referentes a Carta 1

    // Entrada e Saída de Dados da Cidade
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    // Entrada e Saída de Dados do Estado (Uma letra de A - H representando os oito estados)
    printf("Digite o nome do Estado: ");
    scanf("%s", estado1);

    // Entrada e Saída de Dados do Còdigo da Carta (Numero de 01 a 04)
    // Exemplo: A01,B04
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);

    // Entrada e Saída de Dados da População
    printf("Digite a Quantidade da Populção: ");
    scanf("%lu", &populacao1);

    // Entrada e Saída de Dados da Área
    printf("Digite a Área: ");
    scanf("%f", &area1);

    // Entrada e Saída de Dados do PIB (Produto Interno Bruto)
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    // Entrada e Saída de Dados do Numero de Pontos Turisticos
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Area de Cálculos (Densidade, PIB per Capita e Super Poder)
    densidade1 = populacao1 / area1;
    pibc1 = pib1 / populacao1;
    super1 = populacao1 + pontos1 + area1 + pib1  + pibc1 + ( 1 / densidade1);

    // Entrada e Saída de Dados referentes a Carta 2

    // Titulo
    printf("\n---- Carta2 ----\n");

    // Entrada e Saída de Dados da Cidade 
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    // Entrada e Saída de Dados do Estado (Letra de A até H)
    printf("Digite o nome do Estado: ");
    scanf("%s", estado2);

    // Entrada e Saída de Dados do Código da Carta (Exemplo A01, B04)
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);

    // Entrada e Saída de Dados da População
    printf("Digite a Quantidade da População: ");
    scanf("%lu", &populacao2);

    // Entrada e Saída de Dados da Área
    printf("Digite a Área: ");
    scanf("%f", &area2);

    // Entrada e Saída de Dados do PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    // Entrada e Saída de Dados do numero de Pontos Turisticos
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Área de Cálculos (Carta2)
    densidade2 = populacao2 / area2;
    pibc2 = pib2 / populacao2;
    super2 = populacao2 + pontos2 + area2 + pib2  + pibc2 + ( 1 / densidade2);

    // Exibição dos dados no terminal 
    printf("\n---- Carta1 ----\n");

    printf("Cidade: %s \n", cidade1);
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f Bilhões de Reais \n", pib1);
    printf("Pontos Turisticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f Reais \n", pibc1);
    printf("Super Poder: %.2f \n", super1);

    printf("\n---- Carta2 ----\n");

    printf("Cidade: %s \n", cidade2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f Reais \n", pibc2);
    printf("Super Poder: %.2f \n", super2);

    // Sistema de Comparação das Cartas

    // Titulo
    printf("\n---- Resultado ----\n");

    // Comparação entre População
  if (populacao1 > populacao2){
    printf("População: Carta 1 Venceu! \n");
  } else if (populacao2 > populacao1){
    printf("População Carta 2 Venceu! \n");
  } else {
    if(populacao1 == populacao2){
      printf("População: Empate \n");
    }
  }

  // Compáração entre  Área
  if (area1 > area1){
    printf("Área: Carta 1 Venceu! \n");
  } else if (area2 > area1){
    printf("Área: Carta 2 Venceu! \n");
  } else {
    if (area1 == area2){
      printf("Área: Empate \n");
    }
  }

  // Comparação entre PIB
  if (pib1 > pib2){ 
    printf("PIB: Carta 1 Venceu! \n"); 
  } else if (pib2 > pib1){
    printf("PIB: Carta 2 Venceu! \n");
  } else {
    if(pib1 == pib2){
      printf("PIB: Empate \n");
    }
  }

  // Comparação entre Pontos Turisticos
  if (pontos1 > pontos2){
    printf("Pontos Turisticos: Carta 1 Venceu! \n");
  } else if (pontos2 > pontos1){
    printf("Pontos turisticos: Carta 2 Venceu! \n");
  } else {
    if (pontos1 == pontos2){
      printf("Pontos Turisticos: Empate \n");
    }
  }

  // Comparação entre Densidade Populacional
  if (densidade1 > densidade2){
    printf("Densidade Populacional: Carta 1 Venceu! \n");
  } else if (densidade2 > densidade1){
    printf("Densidade Populacional: Carta 2 Venceu! \n");
  } else {
    if (densidade1 == densidade2){
      printf("Densidade Populacional: Empate \n");
    }
  }

  // Comparação entre PiB per Capita
  if (pibc1 > pibc2){
    printf("PIB per Capita: Carta 1 Venceu! \n");
  } else if (pibc2 > pibc1){
    printf("PIB per Capita: Carta 2 Venceu! \n");
  } else {
    if (pibc1 == pibc2){
      printf("PIB per Capita: Empate \n");
    }
  }

  // Comparação entre Super Poder
  if (super1 > super2){
    printf("Super Poder: Carta 1 Venceu!");
  } else if (super2 > super1){
    printf("Super Poder: Carta 2 Venceu!");
  } else {
    if (super1 == super2){
      printf("Super Poder: Empate \n");
    }
  }

    



    




 



    












    return 0;
}
