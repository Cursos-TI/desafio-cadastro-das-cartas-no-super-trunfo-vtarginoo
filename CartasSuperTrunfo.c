#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Carta

float calculaDensidade (unsigned long populacao, int area){

    return (float) populacao/area;
}

float calculaDensidadeInversa (unsigned long populacao, int area){

    return (float) area/populacao;
}


float calculaPibPerCapita (int pib, unsigned long populacao){

    return (float) pib/populacao;
}

float calculaSuperPoder (unsigned long populacao,int pib, int area, int pontosTuristicos ) {

        float popfloat = (float) populacao;
        float pibfloat = (float) pib;
        float areafloat = (float) area;
        float pontosTuristicosfloat = (float) pontosTuristicos;

        float inversoDensidade = calculaDensidadeInversa(populacao,area);
        float pibPerCapita  = calculaPibPerCapita(pib,populacao);

        
        return popfloat + pibfloat + areafloat + pontosTuristicosfloat + inversoDensidade + pibPerCapita;
}


int main() {
    
    printf("*********** seja bem vindo ao super trunfo ***********\n");

    // Declaração das variaveis do estado 1
    char estado1;
    char codigoDaCarta1[20];
    char nome1[50];
    unsigned long populacao1;
    float areaKm1;
    float pib1;
    int pontosTuristicos1;
    char numeroDaCarta1 = '1'; 

    // Declaração das variaveis do estado 2
    char estado2;
    char codigoDaCarta2[20];
    char nome2[50];
    unsigned long populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;
    char numeroDaCarta2 = '2'; 


    printf("Chegou a hora de declarar a primeira carta: ***********\n");


    // --- Introdução dos Dados da Cidade 1 ---
    printf("Digite o caracter do estado 1:\n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o nome do estado 1:\n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Digite a populacao do estado 1:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km2 do estado 1:\n");
    scanf("%f", &areaKm1);

    printf("Digite o PIB do estado 1:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado 1:\n");
    scanf("%d", &pontosTuristicos1);

    // -- Criacao do codigo 1
    sprintf(codigoDaCarta1, "%c0%c", estado1, numeroDaCarta1);
    
    // Calculo Densidade Populacional e PIB Percapita 1
    float densidade1 = calculaDensidade(populacao1,areaKm1);
    float pibPerCapita1 = calculaPibPerCapita(pib1,populacao1);
    float superPoder1 = calculaSuperPoder(populacao1,pib1,areaKm1,pontosTuristicos1);


////////////////////////////////////////////////////////////////

printf("Chegou a hora de declarar a segunda carta: ***********\n");

    // --- Introdução dos Dados da Cidade 2 ---
    printf("Digite o caracter do estado 2:\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o nome do estado 2:\n");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite a populacao do estado 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km2 do estado 2:\n");
    scanf("%f", &areaKm2);

    printf("Digite o PIB do estado 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do estado 2:\n");
    scanf("%d", &pontosTuristicos2);
     // -- Criacao do codigo 
    sprintf(codigoDaCarta2, "%c0%c", estado2, numeroDaCarta2);

    // Calculo Densidade Populacional e PIB Percapita 2
    float densidade2 = calculaDensidade(populacao2,areaKm2);
    float pibPerCapita2 = calculaPibPerCapita(pib2,populacao2);
    float superPoder2 = calculaSuperPoder(populacao2,pib2,areaKm2,pontosTuristicos2);



     // --- Exibicao dos Dados da Cidade 1 ---
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1); // Exemplo de como usar a precisao no printf
    printf("PIB:  %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita:   %.2f reais \n", pibPerCapita1);
    printf("Super Poder:   %.2f\n", superPoder1);

     // --- Exibicao dos Dados da Cidade 2 ---
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2); 
    printf("PIB:  %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita:   %.2f reais \n", pibPerCapita2);
    printf("Super Poder:   %.2f\n", superPoder2);   

    ///Comparação  

    printf("========== Comparação das Cartas ========== \n");
    
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", areaKm1 > areaKm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2); // Lembre-se que o menor valor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2); 
        




   
    return 0;
}
