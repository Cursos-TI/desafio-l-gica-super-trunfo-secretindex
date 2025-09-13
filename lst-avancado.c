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

    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha);

    // Comparação
    printf("\nResultado da Comparação:\n");
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("Populacao: Carta 1 venceu (1)\n");
            else if (populacao2 > populacao1)
                printf("Populacao: Carta 2 venceu (0)\n");
            else
                printf("Populacao: Empate (0)\n");
            break;

        case 2:
            if (area1 > area2)
                printf("Area: Carta 1 venceu (1)\n");
            else if (area2 > area1)
                printf("Area: Carta 2 venceu (0)\n");
            else
                printf("Area: Empate (0)\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("PIB: Carta 1 venceu (1)\n");
            else if (pib2 > pib1)
                printf("PIB: Carta 2 venceu (0)\n");
            else
                printf("PIB: Empate (0)\n");
            break;

        case 4:
            if (pontos1 > pontos2)
                printf("Pontos Turisticos: Carta 1 venceu (1)\n");
            else if (pontos2 > pontos1)
                printf("Pontos Turisticos: Carta 2 venceu (0)\n");
            else
                printf("Pontos Turisticos: Empate (0)\n");
            break;

        case 5:
            if (densidade1 < densidade2)
                printf("Densidade Populacional: Carta 1 venceu (1)\n");
            else if (densidade2 < densidade1)
                printf("Densidade Populacional: Carta 2 venceu (0)\n");
            else
                printf("Densidade Populacional: Empate (0)\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}