#include <stdio.h>

int main() {
    // ======= CARTA 01 =======

     // Declaração das variáveis
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro

    printf("=== Cadastro da Carta 01 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf("%s", estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // ======= EXIBIÇÃO =======
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // ======= CARTA 02 =======

    // Declaração das variáveis da segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro
    printf("\n=== Cadastro da Carta 02 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf("%s", estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ======= EXIBIÇÃO =======
    printf("\n---- CARTA 02 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
