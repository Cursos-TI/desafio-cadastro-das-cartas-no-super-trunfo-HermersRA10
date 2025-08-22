#include <stdio.h>

int main() {

    printf("Desafio Super trunfo\n");
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Carta 2

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // entrada de dados

    // carta 1

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf (" %c", &estado1);

    printf("digite o codigo da carta:");
    scanf(" %s", codigo1);

    printf("nome da cidade:");
    scanf(" %s", cidade1);

    printf("populaçao da cidade:");
    scanf(" %d", &populaçao1);

    printf("area da cidade:");
    scanf(" %f", &area1);

    printf("digite o pib da cidade:");
    scanf(" %f", &pib1);

    printf("digite quantos pontos turisticos:");
    scanf(" %d", &pontosturisticos1);

    // carta 2

    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf (" %c", &estado2);

    printf("digite o codigo da carta:");
    scanf(" %s", codigo2);

    printf("nome da cidade:");
    scanf(" %s", cidade2);

    printf("populaçao da cidade:");
    scanf(" %d", &populaçao2);

    printf("area da cidade:");
    scanf(" %f", &area2);

    printf("digite o pib da cidade:");
    scanf(" %f", &pib2);

    printf("digite quantos pontos turisticos:");
    scanf(" %d", &pontosturisticos2);

    // saida de dados

    // carta 1

    printf("\n carta 1:\n");
    printf("estado: %c \n", estado1);
    printf("codigo:%s \n", codigo1);
    printf("nome da cidade: %s \n", cidade1);
    printf("populaçao: %d \n", populaçao1);
    printf("area: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("numero de pontos turisticos: %d \n", pontosturisticos1);

    // carta 2

    printf(" carta 2:\n");
    printf("estado: %c \n", estado2);
    printf("codigo:%s \n", codigo2);
    printf("nome da cidade: %s \n", cidade2);
    printf("populaçao: %d pessoas\n", populaçao2);
    printf("area: %.2f Km\n", area2);
    printf("PIB: %.2f bilhões \n", pib2);
    printf("numero de pontos turisticos: %d \n", pontosturisticos2);

    return 0;


}