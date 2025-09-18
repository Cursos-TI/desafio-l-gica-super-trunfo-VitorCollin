#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1;
    char codigo_carta1 [4];
    char nome_cidade1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char estado2;
    char codigo_carta2 [4];
    char nome_cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("******* Carta 1 ******* \n");

    printf("Digite o estado entre A e H da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta, letra + numero de 01 a 04 da primeira carta:\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome_cidade1);

    printf("Digite o numero de população da cidade da primeira carta:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km2 da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);


    printf("******* Carta 2 ******* \n");

    printf("Digite o estado entre A e H da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta, letra + numero de 01 a 04 da segunda carta:\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome_cidade2);

    printf("Digite o numero de população da cidade da segunda carta:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km2 da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

    // Área para manipulação de dados 
    densidade_populacional1 =  populacao1 / area1;
    pib_per_capita1 =  pib1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 =  pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    if(populacao1 > populacao2){
        printf("Cidade 1 tem população maior \n");
    }
    else{
        printf("Cidade 2 tem população maior \n");
    }

    if(area1 > area2){
        printf("Cidade 1 tem área maior \n");
    }
    else{
        printf("Cidade 2 tem área maior \n");
    }

    if(pib1 > pib2){
        printf("Cidade 1 tem PIB maior \n");
    }
    else{
        printf("Cidade 2 tem PIB maior \n");
    }

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("Cidade 1 tem mais pontos turisticos \n");
    }
    else{
        printf("Cidade 2 tem mais pontos turisticos \n");
    }

    if(densidade_populacional1 > densidade_populacional2){
        printf("Cidade 1 tem uma densidade populacional maior \n");
    }
    else{
        printf("Cidade 2 tem uma densidade populacional maior \n");
    }

    if(pib_per_capita1 > pib_per_capita2){
        printf("Cidade 1 tem um PIB per capita maior \n");
    }
    else{
        printf("Cidade 2 tem PIB per capita maior \n");
    }


    // Calculando o Super Poder

    long double poder1 = (double) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    long double poder2 = (double) populacao2+ area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2) ;


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if(poder1 > poder2){
        printf("A cidade vencedora é : %s , Avaliado pela junção de todos os atributos \n", nome_cidade1);
    }
    else{
        printf("A cidade vencedora é : %s , Avaliado pela junção de todos os atributos\n ", nome_cidade2);

    }
    return 0;
}
