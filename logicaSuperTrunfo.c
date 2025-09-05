#include <stdio.h>

int main () {
    char estado[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    unsigned int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float popdecimal, popdecimal2;
    float pibcapita, pibcapita2;
    float densidadepop, densidadepop2;

    float SuperPoder, SuperPoder2;
    int opcao;

    //Informações sobre a carta 1
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade de pessoas na população: \n");
    scanf("%u", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo);

    printf("Digite a população em decimal (bilhões): \n");
    scanf("%f", &popdecimal);

    //Informações sobre a carta 2
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de pessoas na população: \n");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo2);

    printf("Digite a população em decimal (bilhões): \n");
    scanf("%f", &popdecimal2);

    printf("------------------ \n");

    pibcapita = (float)(pib / popdecimal);
    densidadepop = (populacao / area);
    SuperPoder = (float)(populacao + area + pib + turismo + pibcapita + (area / populacao));

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB Per Capita: %.2f reais\n", pibcapita);
    printf("O Super Poder é: %.2f\n", SuperPoder);

    printf("--------------------------------------- \n");

    pibcapita2 = (float)(pib2 / popdecimal2);
    densidadepop2 = (populacao2 / area2);
    SuperPoder2 = (float)(populacao2 + area2 + pib2 + turismo2 + pibcapita2 + (area2 / populacao2));

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB Per Capita: %.2f reais\n", pibcapita2);
    printf("O Super Poder é: %.2f\n", SuperPoder2);

    //Comparações dos atributos
    printf("-----------Duelos----------- \n");
    //Menu interativo
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Selecione o atributo que seja comparar: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("**População**\n");
        printf("Carta 1 - %s: %u\n", cidade, populacao);
        printf("Carta 2 - %s: %u\n", cidade2, populacao2);
    
        if (populacao > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (populacao == populacao2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 2:
        printf("**Área**\n");
        printf("Carta 1 - %s: %.2f\n", cidade, area);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);

        if (area > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (area == area2) {
            printf("Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 3:
        printf("**PIB**\n");
        printf("Carta 1 - %s: %.2f\n", cidade, pib);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);

        if (pib > pib2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (pib == pib2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 4:
        printf("**Pontos Turísticos**\n");
        printf("Carta 1 - %s: %d\n", cidade, turismo);
        printf("Carta 2 - %s: %d\n", cidade2, turismo2);

        if (turismo > turismo2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (turismo == turismo2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 5:
        printf("**Densidade Populacional**\n");
        printf("Carta 1 - %s: %.2f\n", cidade, densidadepop);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidadepop2);

        if (densidadepop < densidadepop2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (densidadepop == densidadepop2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 6:
        printf("**PIB Per Capita**\n");
        printf("Carta 1 - %s: %.2f\n", cidade, pibcapita);
        printf("Carta 2 - %s: %.2f\n", cidade2, pibcapita2);

        if (pibcapita > pibcapita2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (pibcapita == pibcapita2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    case 7:
        printf("**Super Poder**\n");
        printf("Carta 1 - %s: %.2f\n", cidade, SuperPoder);
        printf("Carta 2 - %s: %.2f\n", cidade2, SuperPoder2);

        if (SuperPoder > SuperPoder2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (SuperPoder == SuperPoder2){
            printf("Resultado: Empate!\n");
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    return 0;
}