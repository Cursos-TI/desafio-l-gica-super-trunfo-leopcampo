#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    // Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;

    float area1, area2;
    float pib1, pib2;

    int turistico1, turistico2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("=== Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico1);

    // Entrada da Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (float)populacao1 +
        area1 +
        pib1 +
        turistico1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 = (float)populacao2 +
        area2 +
        pib2 +
        turistico2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    //Resultado

    printf("Carta 1 - %s: %d \n", cidade1, populacao1);
    printf("Carta 1 - %s: %d \n", cidade2, populacao2);

    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu. \n");
    }
    else {
        printf("Carta 2 venceu. \n");
    }

    return 0;
}
