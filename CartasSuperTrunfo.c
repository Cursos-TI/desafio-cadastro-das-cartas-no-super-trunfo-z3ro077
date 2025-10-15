#include <stdio.h>
#include <stdlib.h>



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
    int atributo_escolhido1;
    int atributo_escolhido2;

    

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
    printf("\nSelecione o Primeiro Atributo a ser Comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per Capita\n");
    printf("Escolha o numero do atributo: ");
    scanf("%d", &atributo_escolhido1);

    

    // Sistema de Comparação das Cartas
    switch (atributo_escolhido1) {
        case 1:
            printf("\n-----Jogador 1 escolheu População-----\n");
            if (populacao1 > populacao2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (populacao2 > populacao1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 2:
            printf("\n-----Jogador 1 escolheu Área-----\n");
            if (area1 > area2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (area2 > area1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
                break;

        case 3:
            printf("\n-----Jogador 1 escolheu PIB-----\n");
            if (pib1 > pib2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pib2 > pib1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 4:
            printf("\n-----Jogador 1 escolheu Pontos Turísticos-----\n");
            if (pontos1 > pontos2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pontos2 > pontos1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 5:
            printf("\n-----Jogador 1 escolheu Densidade Populacional-----\n");
            if (densidade1 < densidade2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (densidade2 < densidade1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 6:
            printf("\n-----Jogador 1 escolheu Super Poder-----\n");
            if (super1 > super2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (super2 > super1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;
        case 7:
            printf("\n-----Jogador 1 escolheu PIB per Capita-----\n");
            if (pibc1 > pibc2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pibc2 > pibc1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        default:
            printf("\nOpção inválida, tente novamente\n");
            break;
       }

    // Menu de Seleção do Segundo Atributo a ser Comparado (Carta 2) 
    printf("\nSelecione o Segundo Atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per Capita\n");
    printf("Escolha o número do atributo: ");
    scanf("%d", &atributo_escolhido2);
    
    switch (atributo_escolhido2) {
        case 1:
            printf("\n-----Jogador 2 escolheu População-----\n");
            if (populacao1 > populacao2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (populacao2 > populacao1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;


        case 2:
            printf("\n-----Jogador 2 escolheu Área-----\n");
            if (area1 > area2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (area2 > area1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 3:
            printf("\n-----Jogador 2 escolheu PIB-----\n");
            if (pib1 > pib2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pib2 > pib1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 4:
            printf("\n-----Jogador 2 escolheu Pontos Turísticos-----\n");
            if (pontos1 > pontos2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pontos2 > pontos1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 5:
            printf("\n-----Jogador 2 escolheu Densidade Populacional-----\n");
            if (densidade1 < densidade2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (densidade2 < densidade1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 6:
            printf("\n-----Jogador 2 escolheu Super Poder-----\n");
            if (super1 > super2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (super2 > super1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;

        case 7:
            printf("\n-----Jogador 2 escolheu PIB per Capita-----\n");
            if (pibc1 > pibc2)
                printf("\n-----Jogador 1 Venceu!-----\n");
            else if (pibc2 > pibc1)
                printf("\n-----Jogador 2 Venceu!-----\n");
            else
                printf("\n-----Empate!-----\n");
            break;
        default:
            printf("\nOpção inválida, tente novamente\n");
            break;
    }

    printf("\n-----Obrigado por Jogar!-----\n");

    return 0;
}




  

