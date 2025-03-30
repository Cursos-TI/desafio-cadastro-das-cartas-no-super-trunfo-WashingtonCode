#include <stdio.h> // Inclui a biblioteca para usar a função printf
#include <string.h> // Necessário para strcspn

// Desafio Super Trunfo - Países (nível Aventureiro)
// Tema 1 - Cadastro das Cartas
// by Washington Melo

int main() {
    //Declaração de variáveis

    char estado[5], codigodacarta[10], cidade[50]; // Variáveis do tipo caractere
    int populacao, pontosturisticos; // Variáveis do tipo inteiro
    float area, pib, densidadepopulacional, pibpercapita; // Variáveis de ponto flutuante

    // Entrada e saída de dados com printf e scanf - 1ª carta (interações com o usuário)
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado da 1ª carta: \n");
    scanf("%s", estado);

    printf("Digite a letra do estado e em seguida um número de 01 a 04 para representar o código da 1ª carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite um nome de cidade para a 1ª carta: \n");
    getchar();  // Consome o '\n' deixado pelo scanf anterior
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosturisticos);

    // Cálculo da densidade populacional e PIB per capita da 1ª carta
    densidadepopulacional = (float) populacao / area; // Utilizando casting explícito para evitar divisão inteira
    pibpercapita = pib / (float) populacao; // Utilizando casting explícito para evitar divisão inteira

    pib = pib / 1000000000; // Converte PIB para bilhões de reais

    // Printando na tela os dados da 1ª carta (inseridos pelo usuário)

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/KM²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);

    // Entrada e saída de dados com printf e scanf - 2ª carta (interações com o usuário)
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado da 2ª carta: \n");
    scanf("%s", estado);

    printf("Digite a letra do estado e em seguida um número de 01 a 04 para representar o código da 2ª carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite um nome de cidade para a 2ª carta: \n");
    getchar();  // Consome o '\n' deixado pelo scanf anterior
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosturisticos);

    // Cálculo da densidade populacional e PIB per capita da 2ª carta
    densidadepopulacional = (float) populacao / area; // Utilizando casting explícito para evitar divisão inteira
    pibpercapita = pib / (float) populacao; // Utilizando casting explícito para evitar divisão inteira

    pib = pib / 1000000000; // Converte PIB para bilhões de reais

    // Printando na tela os dados da 2ª carta (inseridos pelo usuário)

    printf("Carta 2\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/KM²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);

    return 0;
}
