// Desafio Super Trunfo - Países (nível Aventureiro)
// Tema 2 - Desenvolvendo a Lógica do Jogo
//by Washington Melo

#include <stdio.h> // Inclui a biblioteca para usar a função printf
#include <string.h> // Inclui a biblioteca para usar a função strspn

int main () { // Início do programa

    //Declaração de variáveis

    // Variáveis do tipo caractere
    char pais1[30], pais2[30]; //Nomes dos países que as cartas representam

    // Variáveis do tipo inteiro
    int populacao1, populacao2; //População das cidades
    int ponttur1, ponttur2; //Quantidade de pontos turísticos das cidades
    int opcao; //Opção de comparação escolhida pelo jogador

    //Variáveis de ponto flutuante
    float area1, area2; //Área das cidades em Km²
    float pib1, pib2; //PIB das cidades
    float densdemog1, densdemog2; //Densidade populacional das cidades
       
    printf("\n\n");
    printf("***Desafio Super Trunfo - Países (nível Aventureiro)***\n");
    printf("Tema 2 - Desenvolvendo a Lógica do Jogo\n");
    printf("by Washington Melo\n\n");

    printf("**Cadastro da Carta 1**\n\n");

    // Entrada e saída de dados com printf e scanf - Carta 1
    
    printf("Digite o nome de um país para representar a carta 1: \n");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = '\0'; // Remove o '\n' do final da string
    
    printf("Digite a sua população: \n");
    scanf("%d", &populacao1);
   
    printf("Digite a sua área (em KM²): \n");
    scanf("%f", &area1);
    
    printf("Digite o seu PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos existentes: \n");
    scanf("%d", &ponttur1);

    getchar(); // Limpa o buffer do teclado

    printf("\n**Cadastro da Carta 2**\n\n");

    // Entrada e saída de dados com printf e scanf - carta 2
    
    printf("Digite o nome de outro país para representar a carta 2: \n");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = '\0'; // Remove o '\n' do final da string
    
    printf("Digite a sua população: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a sua área (em KM²): \n");
    scanf("%f", &area2);
    
    printf("Digite o seu PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos existentes: \n");
    scanf("%d", &ponttur2);

    // Cálculo das densidades demograficas das cartas 1 e 2
    densdemog1 = (float)populacao1 / area1; // Utilizando casting explícito para evitar divisão inteira
    densdemog2 = (float)populacao2 / area2; // Utilizando casting explícito para evitar divisão inteira
    
    // Comparação dos atributos das cartas e exibição do resultado
    
    printf("\n");
    printf("**Comparação dos atributos das cartas**\n\n");

    printf("Escolha uma opção de atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao) { // Início do switch para comparar os atributos das cartas
    case 1: // População
        printf("Comparando a população dos países %s e %s:\n", pais1, pais2);
        if (populacao1 == populacao2) {
        printf("O resultado da comparação foi empate");
        } else if (populacao1 > populacao2) {
        printf("A carta 1 venceu, população do país %s é %d habitantes e do país %s é %d habitantes.\n", pais1, populacao1, pais2, populacao2);
        } else {
        printf("A carta 2 venceu, população do país %s é %d habitantes e do país %s é %d habitantes.\n", pais2, populacao2, pais1, populacao1);
        }
        break;
    case 2: // Área
        printf("Comparando a área dos países %s e %s:\n", pais1, pais2);
        if (area1 == area2) {
        printf("O resultado da comparação foi empate");
        } else if (area1 > area2) {
        printf("A carta 1 venceu, área do país %s é %.2f km² e do país %s é %.2f km².\n", pais1, area1, pais2, area2);
        } else {
        printf("A carta 2 venceu, área do país %s é %.2f km² e do país %s é %.2f km².\n", pais2, area2, pais1, area1);
        }
        break;
    case 3: // PIB
        printf("Comparando o PIB dos países %s e %s:\n", pais1, pais2);
        if (pib1 == pib2) {
        printf("O resultado da comparação foi empate");
        } else if (pib1 > pib2) {
        printf("A carta 1 venceu, PIB do país %s é R$ %.2f e do país %s é R$ %.2f.\n", pais1, pib1, pais2, pib2);
        } else {
        printf("A carta 2 venceu, PIB do país %s é R$ %.2f e do país %s é R$ %.2f.\n", pais2, pib2, pais1, pib1);
        }
        break;
    case 4: // Número de pontos turísticos
        printf("Comparando o número de pontos turísticos dos países %s e %s:\n", pais1, pais2);
        if (ponttur1 == ponttur2) {
        printf("O resultado da comparação foi empate");
        } else if (ponttur1 > ponttur2) {
        printf("A carta 1 venceu, o país %s tem %d pontos turísiticos e o país %s tem somente %d.\n", pais1, ponttur1, pais2, ponttur2);
        } else {
        printf("A carta 2 venceu, o país %s tem %d pontos turísticos e o país %s tem somente %d.\n", pais2, ponttur2, pais1, ponttur1);
        }
        break;
    case 5: // Densidade demográfica
        printf("Comparando a densidade demográfica dos países %s e %s:\n", pais1, pais2);
        if (densdemog1 == densdemog2) {
        printf("O resultado da comparação foi empate");
        } else if (densdemog1 < densdemog2) {
        printf("A carta 1 venceu, densidade demográfica do país %s é %.2f hab/km² e do país %s é %.2f hab/km².\n", pais1, densdemog1, pais2, densdemog2);
        } else {
        printf("A carta 2 venceu, densidade demográfica do país %s é %.2f hab/km² e do país %s é %.2f hab/km².\n", pais2, densdemog2, pais1, densdemog1);
        }
        break;

    default: // Opção inválida
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
      
    return 0; // Fim do programa
}