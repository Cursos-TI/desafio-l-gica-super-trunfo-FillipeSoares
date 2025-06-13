#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 3 - DESENVOLVENDO A LOGICA DOS JOGO
// Teste Carlos Fillipe Soares de Sousa

int main() {
    char estado1[3];
    char codigoCarta1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapta1;
    float superpoder1;

    char estado2[3];
    char codigoCarta2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapta2;
    float superpoder2;

    printf("*** JOGO SUPER TRUNFO! ***")


    printf("\nINSIRA AS INFORMAÇÕES DA CARTA 01\n");
    scanf("%s", estado1);

    printf("Codigo da Carta:");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade:");
    scanf("%s", nomeCidade1);

    printf("Populacao:");
    scanf("%d", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos:");
    scanf("%d", &pontosTuristicos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;
    superpoder1=populacao1+area1+pib1+pibpercapta1+densidadepopulacional1+pontosTuristicos1;

    printf("\nINSIRA AS INFORMAÇÕES DA CARTA 02\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da Carta:");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade:");
    scanf("%s", nomeCidade2);

    printf("Populacao:");
    scanf("%d", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;
    superpoder2=populacao2+area2+pib2+pibpercapta2+densidadepopulacional2+pontosTuristicos2;

    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional1: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita1: %.2f\n", pibpercapta1);
    printf("Super Poder1: %.2f", superpoder1);
    printf("\n\n");

    printf("\nCARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional2: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita2: %.2f\n", pibpercapta2);
    printf("Super Poder2: %.2f\n", superpoder2);
    printf("\n\n");

    
    printf("=== COMPARAÇÕES DAS CARTAS:===\n");
    printf("\n\n");
    printf("(ATRIBUTO: POPULAÇÃO)\n");

    char cidadeVencedora[50];
    
    printf("Carta 01 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 02 - %s: %d\n", nomeCidade2, populacao2);
    printf("\n");
    if (populacao1>populacao2){
        printf("Carta 01 Venceu!\n");
        strcpy(cidadeVencedora, nomeCidade1);
    }else {
        printf("Carta 02 Venceu!\n");
        strcpy(cidadeVencedora, nomeCidade2);
    }
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;

}