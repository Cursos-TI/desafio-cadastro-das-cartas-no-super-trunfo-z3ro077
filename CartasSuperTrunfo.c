#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis 

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
    
    // Variáveis de Controle
    int opcao;
    int atributo_escolhido;
    int atributo_escolhido2;

    // Variável para operádores ternários
    int maior;
    int menor; // especificamente para comparação da densidade populacional


    // Menu inicial do Super Trunfo
    printf("\n----- Super Trunfo C Edition -----\n");

    
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

    // Menu de Seleção dos Atributos
    printf("\nDigite o número do Atributo a ser Comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per Capita\n");
    printf("Escolha o numero do atributo: \n");
    scanf("%d", &atributo_escolhido);

   
    // Sistema de Comparação das Cartas
    
    // Titulo
    printf("\n---- Resultado ----\n");

    switch (atributo_escolhido)
    {
    case 1: // Comparação entre População
    maior = (populacao1 > populacao2) ? printf("População: Carta 1 Venceu!") : 
    printf("População: Carta 2 Venceu! \n");
    break; // encerra o comando

    case 2: // Compáração entre  Área
    maior = (area1 > area2) ? printf("Área: Carta 1 Venceu") :
    printf("Área: Carta 2 Venceu!");
    break;

    case 3:// Comparação entre PIB
    maior = (pib1 > pib2) ? printf("PIB: Carta 1 Venceu!") :
    printf("PIB: Carta 2 Venceu!");
    break;

    case 4:// Comparação entre Pontos Turisticos
    maior = (pontos1 > pontos2) ? printf("Pontos Turisticos: Carta 1 Venceu!") :
    printf("Pontos Turisticos: Carta 2 Venceu!");
    break;

    case 5: // Comparação entre Densidade Populacional
    menor = (densidade1 < densidade2) ? printf("Densidade Populacional: Carta 1 Venceu!") :
    printf("Densidade Populacional: Carta 2 Venceu!");
    break;

    case 6: // Comparação entre Super Poder
    maior = (super1 > super2) ? printf("Super Trunfo: Carta 1 Venceu!") :
    printf("Super Trunfo: Carta 2 Venceu!");
    break;


    case 7: // Comparação entre PiB per Capita
    maior = (pibc1 > pibc2) ? printf("PIB per Capita: Carta 1 Venceu!") :
    printf("PIB per Capita: Carta 2 Venceu!");
    break;

    // caso se nehuma opção for escolhida ou qualquer outra que não estiver presente nas opções o código default irá rodar
    default: printf("\nOpção invalida tente novamente\n");
    break;
     
  }

   // Menu de Seleção do Segundo Atributo a ser Comparado
    printf("\nDigite o número do Segundo Atributo a ser Comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per Capita\n");
    printf("Escolha o numero do atributo: \n");
    scanf("%d", &atributo_escolhido2);

    switch (atributo_escolhido2)
    {
    case 1: // Comparação entre População
    maior = (populacao1 > populacao2) ? printf("População: Carta 1 Venceu!") : 
    printf("População: Carta 2 Venceu! \n");
    break; // encerra o comando

    case 2: // Compáração entre  Área
    maior = (area1 > area2) ? printf("Área: Carta 1 Venceu") :
    printf("Área: Carta 2 Venceu!");
    break;

    case 3:// Comparação entre PIB
    maior = (pib1 > pib2) ? printf("PIB: Carta 1 Venceu!") :
    printf("PIB: Carta 2 Venceu!");
    break;

    case 4:// Comparação entre Pontos Turisticos
    maior = (pontos1 > pontos2) ? printf("Pontos Turisticos: Carta 1 Venceu!") :
    printf("Pontos Turisticos: Carta 2 Venceu!");
    break;

    case 5: // Comparação entre Densidade Populacional
    menor = (densidade1 < densidade2) ? printf("Densidade Populacional: Carta 1 Venceu!") :
    printf("Densidade Populacional: Carta 2 Venceu!");
    break;

    case 6: // Comparação entre Super Poder
    maior = (super1 > super2) ? printf("Super Trunfo: Carta 1 Venceu!") :
    printf("Super Trunfo: Carta 2 Venceu!");
    break;


    case 7: // Comparação entre PiB per Capita
    maior = (pibc1 > pibc2) ? printf("PIB per Capita: Carta 1 Venceu!") :
    printf("PIB per Capita: Carta 2 Venceu!");
    break;

    // caso se nehuma opção for escolhida ou qualquer outra que não estiver presente nas opções o código default irá rodar
    default: printf("\nOpção invalida tente novamente\n");
    break;
  }


  

  return 0;
}
