#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

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

    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparar entre as cartas:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    
    printf("\nEscolha o primeiro atributo (1-5): ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo (1-5): ");
    scanf("%d", &escolha2);

    printf("\nResultado da Comparação entre Atributos:\n");

    if (escolha1 == escolha2) {
        printf("Os dois atributos são os mesmos. Escolha diferentes atributos para comparação.\n");
    } else {
        switch (escolha1) {
            case 1:
                switch (escolha2) {
                    case 2:
                        printf("Comparando População e Área:\n");
                        printf("Populacao: %s venceu (1)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
                        printf("Area: %s venceu (1)\n", (area1 > area2) ? "Carta 1" : "Carta 2");
                        break;
                    case 3:
                        printf("Comparando População e PIB:\n");
                        printf("Populacao: %s venceu (1)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
                        printf("PIB: %s venceu (1)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
                        break;
                    case 4:
                        printf("Comparando População e Pontos Turísticos:\n");
                        printf("Populacao: %s venceu (1)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
                        printf("Pontos Turisticos: %s venceu (1)\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
                        break;
                    case 5:
                        printf("Comparando População e Densidade Populacional:\n");
                        printf("Populacao: %s venceu (1)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
                        printf("Densidade Populacional: %s venceu (1)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
                        break;
                }
                break;
            case 2:
                switch (escolha2) {
                    case 3:
                        printf("Comparando Área e PIB:\n");
                        printf("Area: %s venceu (1)\n", (area1 > area2) ? "Carta 1" : "Carta 2");
                        printf("PIB: %s venceu (1)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
                        break;
                    case 4:
                        printf("Comparando Área e Pontos Turísticos:\n");
                        printf("Area: %s venceu (1)\n", (area1 > area2) ? "Carta 1" : "Carta 2");
                        printf("Pontos Turisticos: %s venceu (1)\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
                        break;
                    case 5:
                        printf("Comparando Área e Densidade Populacional:\n");
                        printf("Area: %s venceu (1)\n", (area1 > area2) ? "Carta 1" : "Carta 2");
                        printf("Densidade Populacional: %s venceu (1)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
                        break;
                }
                break;
            case 3:
                switch (escolha2) {
                    case 4:
                        printf("PIB vs Pontos Turísticos:\n");
                        printf("PIB: %s venceu (1)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
                        printf("Pontos Turisticos: %s venceu (1)\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
                        break;
                    case 5:
                        printf("PIB vs Densidade Populacional:\n");
                        printf("PIB: %s venceu (1)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
                        printf("Densidade Populacional: %s venceu (1)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
                        break;
                }
                break;
            case 4:
                switch (escolha2) {
                    case 5:
                        printf("Comparando Pontos Turísticos e Densidade Populacional:\n");
                        printf("Pontos Turisticos: %s venceu (1)\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
                        printf("Densidade Populacional: %s venceu (1)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
                        break;
                }
                break;
        }
    }

    return 0;
}