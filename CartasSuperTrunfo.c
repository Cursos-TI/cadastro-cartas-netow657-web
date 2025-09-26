#include <stdio.h>
    // Carta 1
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada - Carta 1
    printf("Digite uma letra de 'A' a 'Z' para definir o estado: \n");
    scanf(" %c", &estado);

    printf("Digite um Código (Ex: 'A01'): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite o número de Habitantes: \n");
    scanf("%lu", &populacao);

    printf("Digite a Área (km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = (float) populacao / area;
    pibPerCapita = pib / populacao;
    superPoder = (float) populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0 / densidadePopulacional);

    // Entrada - Carta 2
    printf("Digite uma letra de 'A' a 'Z' para definir o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um Código (Ex: 'A01'): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite o número de Habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional < densidadePopulacional2); 
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

    return 0;
}