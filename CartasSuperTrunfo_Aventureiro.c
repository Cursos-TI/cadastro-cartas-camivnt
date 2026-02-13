#include <stdio.h>

int main() {
    // ======= CARTA 01 =======
    char estado[3], codigo[4], nomeCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    printf("---- CARTA 01 ----\n");
    printf("Estado: "); scanf("%s", estado);
    printf("Código: "); scanf("%s", codigo);
    printf("Cidade: "); scanf("%s", nomeCidade);
    printf("População: "); scanf("%d", &populacao);
    printf("Área (em km2): "); scanf("%f", &area);
    printf("PIB (em bilhões): "); scanf("%f", &pib);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos);

    float densidadePopulacional = populacao / area;
    float pibPerCapita = (pib * 1000000000) / populacao;

    printf("\n---- RESULTADOS CARTA 01 ----\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado, codigo, nomeCidade, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);

    // ======= CARTA 02 =======
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("\n---- CARTA 02 ----\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf("%s", nomeCidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (em km2): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n---- RESULTADOS CARTA 02 ----\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    return 0;
}
