#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento 
// do sistema de cadastro de cartas de cidades.


int main() {

    // Definindo variáveis separadas para cada atributo da cidade 1.

    char estado1[2];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    int pib1;
    int pontosTuristicos1;

    // Variáveis do segundo desafio

    float densidadePopulacional1;
    float pibPerCapita1;

    // Definindo variáveis separadas para cada atributo da cidade 2.

    char estado2[2];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    int pib2;
    int pontosTuristicos2;

    // Variáveis do segundo desafio

    float densidadePopulacional2;
    float pibPerCapita2;
    
    //apresentação do jogo

    printf("Super Trunfo - Países!!!\n");
    printf("Primeiro, crie as cartas de suas Cidades Favoritas do Brasil\ncom sua devidas características!\n");
    printf("\n");

    // Cadastrando a primeira cidade
    printf("CIDADE 1:\n");
    printf("\n");
    printf("Qual letra representará o Estado?\n");
    printf("Deve ser uma letra maiúscula de 'A' a 'H'\n (representando um dos oito estados escolhidos): ");
    scanf("%s", estado1);
    printf("Qual o código da carta?\n");
    printf("Deve ser representado pela letra maiúscula do estado\nseguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade?");
    scanf("%s", cidade1);
    printf("Qual o número de habitantes da Cidade?");
    scanf("%i", &populacao1);
    printf("Qual o tamanho da área em metros quadrados?");
    scanf("%f", &area1);
    printf("O produto interno bruto(PIB) da Cidade:");
    scanf("%i", &pib1);
    printf("Qual é quantidade de pontos turísticos?");
    scanf("%i", &pontosTuristicos1);
    printf("\n");

    //Imprimindo para o usuário os dados da primeira cidade

    printf("CIDADE 1:\n");
    printf("O Estado é: %s\n", estado1);
    printf("O Código é: %s\n", codigo1);
    printf("A Cidade é: %s\n", cidade1);
    printf("A População é: %i\n", populacao1);
    printf("Aáera é: %f\n", area1);
    printf("O PIB é: %i\n", pib1);
    printf("Os pontos turísticos são: %i\n", pontosTuristicos1);

    //calculando as variáveis de densidade populacional e PIB per capita

    densidadePopulacional1 = populacao1 / area1;
    printf("A densidade populacional é: %.2f\n", densidadePopulacional1);
    pibPerCapita1 = pib1 / populacao1;
    printf("O PIB per capita é: %.2f\n", pibPerCapita1);
    
    printf("\n");
    printf("\n");

    //cadastrando a segunda cidade

    printf("CIDADE 2:\n");
    printf("\n");
    printf("Qual letra representará o Estado?\n");
    printf("Deve ser uma letra maiúscula de 'A' a 'H'\n (representando um dos oito estados escolhidos): ");
    scanf("%s", estado2);
    printf("Qual o código da carta?\n");
    printf("Deve ser representado pela letra maiúscula do estado\nseguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade?");
    scanf("%s", cidade2);
    printf("Qual o número de habitantes da Cidade?");
    scanf("%i", &populacao2);
    printf("Qual o tamanho da área em metros quadrados?");
    scanf("%f", &area2);
    printf("O produto interno bruto(PIB) da Cidade:");
    scanf("%i", &pib2);
    printf("Qual é quantidade de pontos turísticos?");
    scanf("%i", &pontosTuristicos2);
    printf("\n");

    //imprimindo para o usuário os dados da segunda cidade

    printf("CIDADE 2:\n");
    printf("O Estado é: %s\n", estado2);
    printf("O Código é: %s\n", codigo2);
    printf("A Cidade é: %s\n", cidade2);
    printf("A População é: %i\n", populacao2);
    printf("Aáera é: %f\n", area2);
    printf("O PIB é: %i\n", pib2);
    printf("Os pontos turísticos são: %i\n", pontosTuristicos2);

    //calculando as variáveis de densidade populacional e PIB per capita

    densidadePopulacional2 = populacao2 / area2;
    printf("A densidade populacional é: %.2f\n", densidadePopulacional2);
    pibPerCapita2 = pib2 / populacao2;
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);

    return 0;

      }