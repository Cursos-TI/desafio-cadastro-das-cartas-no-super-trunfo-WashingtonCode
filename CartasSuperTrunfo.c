// Desafio Super Trunfo - Países (nível Mestre)
// Tema 1 - Cadastro das Cartas
//by Washington Melo

#include <stdio.h> // Inclui a biblioteca para usar a função printf
#include <string.h>  // Necessário para strcspn

int main (){

    //Declaração de variáveis

    // Variáveis do tipo caractere
    char estado1[5], estado2[5]; //Letras que representam os estados das cartas
    char codcarta1[10], codcarta2[10]; //Códigos das cartas
    char cidade1[60], cidade2[60]; //Nomes das cidades
    
    // Variáveis do tipo inteiro
    unsigned long int populacao1, populacao2; //População das cidades
    int ponttur1, ponttur2; //Quantidade de pontos turísticos das cidades

    //Variáveis de ponto flutuante
    float area1, area2; //Área das cidades em Km²
    float pib1, pib2; //PIB das cidades
    float denspop1, denspop2; //Densidade populacional das cidades
    float pibpercapita1, pibpercapita2; //PIB per Capita das cidades
    float superpoder1, superpoder2; //Superpoderes das cartas

    printf("Desafio Super Trunfo Países (nível Mestre)\n");
    printf("by Washington Melo\n\n");  
    printf("Cadastro da Carta 1\n\n");

    // Entrada e saída de dados com printf e scanf - Carta 1 (interações com o usuário)
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite a letra do estado e em seguida um número de 01 a 04 para representar o código da carta 1: \n");
    scanf("%s", codcarta1);

    printf("Digite um nome de cidade para a carta 1: \n");
    getchar();  // Consome o '\n' deixado pelo scanf anterior
    fgets(cidade1, 60, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em KM²) da cidade da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &ponttur1);

    printf("\nCadastro da Carta2\n\n");

    // Entrada e saída de dados com printf e scanf - carta 2 (interações com o usuário)
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta 2: \n");
    scanf("%s", estado2);
 
    printf("Digite a letra do estado e em seguida um número de 01 a 04 para representar o código da carta 2: \n");
    scanf("%s", codcarta2);

    printf("Digite um nome de cidade para a carta 2: \n");
    getchar();  // Consome o '\n' deixado pelo scanf anterior
    fgets(cidade2, 60, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em KM²) da cidade da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &ponttur2);

    // Cálculo da densidade populacional, PIB per capita e Super poder da carta 1
    denspop1 = (float) populacao1 / area1; // Utilizando casting explícito para evitar divisão inteira
    pibpercapita1 = pib1 / (float) populacao1; // Utilizando casting explícito para evitar divisão inteira
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)ponttur1 + pibpercapita1 + denspop1; // Cálculo do superpoder da carta 1 
    pib1 = pib1 / 1000000000; // Converte o PIB da "cidade 1" para bilhões de reais

    // Cálculo da densidade populacional, PIB per capita e Super poder da carta 2
    denspop2 = (float) populacao2 / area2; // Utilizando casting explícito para evitar divisão inteira
    pibpercapita2 = pib2 / (float) populacao2; // Utilizando casting explícito para evitar divisão inteira
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)ponttur2 + pibpercapita2 + denspop2; // Cálculo do superpoder da carta 1
    pib2 = pib2 / 1000000000; // Converte PIB para bilhões de reais

    printf("\n");

    // Impressão dos dados da carta 1 (inseridos pelo usuário)

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponttur1);
    printf("Densidade populacional: %.2f hab/KM²\n", denspop1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    printf("\n");

    // Impressão dos dados da 2ª carta (inseridos pelo usuário)

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponttur2);
    printf("Densidade populacional: %.2f hab/KM²\n", denspop2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    printf("\n");
    printf("Comparando as cartas:\n\n");
    printf("População: Carta 1 venceu: (%lu)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu: (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu: (%d)\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 venceu (%d)\n", ponttur1 > ponttur2);
    printf("Densidade: Carta 2 venceu (%d)\n", denspop1 < denspop2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("superPoder: Carta 1 venceu: (%d)\n", superpoder1 > superpoder2);

    return 0;
}