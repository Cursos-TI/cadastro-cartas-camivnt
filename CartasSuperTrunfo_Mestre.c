#include <stdio.h>

int main () {
    
    // ======= CARTA 01 =======
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;    // AGORA É unsigned long int
    float area;
    float pib; // em bilhões
    int pontosTuristicos;

    printf("---- CARTA 01 ----\n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf("%s", nomeCidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Área (em km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Cálculos
    float densidadePopulacional = populacao / area;
    float pibPerCapita = (pib * 1000000000.0) / populacao;

    float superPoder = 
        (float)populacao +
        area +
        pib +
        pontosTuristicos +
        pibPerCapita +
        (1.0f / densidadePopulacional);



    // ======= EXIBIÇÃO CARTA 01 =======
    printf("\n---- RESULTADOS CARTA 01 ----\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n\n", superPoder);



    // ======= CARTA 02 =======
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;   // AGORA unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("---- CARTA 02 ----\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    float superPoder2 = 
        (float)populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidadePopulacional2);



    // ======= EXIBIÇÃO CARTA 02 =======
    printf("\n---- RESULTADOS CARTA 02 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);



    // ======= COMPARAÇÃO ENTRE CARTAS =======
    printf("---- COMPARAÇÃO ENTRE AS CARTAS ----\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos2);

    // densidade menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional < densidadePopulacional2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

    return 0;
}
