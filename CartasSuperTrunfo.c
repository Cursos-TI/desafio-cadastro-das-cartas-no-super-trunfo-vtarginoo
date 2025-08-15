#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("*********** seja bem vindo ao super trunfo ***********\n");


    // Declaração das variaveis do estado 1
    char estado1;
    char codigoDaCarta1[20];
    char nome1[50];
    int populacao1;
    float areaKm1;
    float pib1;
    int pontosTuristicos1;
    char numeroDaCarta1 = '1'; 

    // Declaração das variaveis do estado 2
    char estado2;
    char codigoDaCarta2[20];
    char nome2[50];
    int populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;
    char numeroDaCarta2 = '2'; 

    // --- Introdução dos Dados da Cidade 1 ---
    printf("Digite o caracter do estado 1:\n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o nome do estado 1:\n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Digite a populacao do estado 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 do estado 1:\n");
    scanf("%f", &areaKm1);

    printf("Digite o PIB do estado 1:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado 1:\n");
    scanf("%d", &pontosTuristicos1);

    // -- Criacao do codigo 1
    sprintf(codigoDaCarta1, "%c0%c", estado1, numeroDaCarta1);

    // --- Introdução dos Dados da Cidade 2 ---
    printf("Digite o caracter do estado 2:\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o nome do estado 2:\n");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite a populacao do estado 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 do estado 2:\n");
    scanf("%f", &areaKm2);

    printf("Digite o PIB do estado 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do estado 2:\n");
    scanf("%d", &pontosTuristicos2);
     // -- Criacao do codigo 
    sprintf(codigoDaCarta2, "%c0%c", estado2, numeroDaCarta2);


     // --- Exibicao dos Dados da Cidade 1 ---
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area (km2): %.2f\n", areaKm1); // Exemplo de como usar a precisao no printf
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);


     // --- Exibicao dos Dados da Cidade 2 ---
    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (km2): %.2f\n", areaKm2); 
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
   
    return 0;
}
