#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // iniciante

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Espaço antes de %c para capturar corretamente
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê uma linha inteira
    printf("Populacao: ");
    scanf("%lu", &populacao1);  // População como unsigned long int
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // -------------------------------------------

    printf("\nResultado da Comparação:\n");

    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");

    if (area1 > area2)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    if (pontos1 > pontos2)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    return 0;
}
