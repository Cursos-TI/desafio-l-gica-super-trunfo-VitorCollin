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
    int resultado1;

    char estado2;
    char codigo_carta2 [4];
    char nome_cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    int resultado2;
    
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

    // Menu interativo para escolha de quais atributos  usar 

    int escolha1;
    int escolha2;

    printf("Escolha qual atributo deseja utilizar para a primeira comparação\n");
    printf("1: População \n");
    printf("2: Área \n");
    printf("3: PIB \n");
    printf("4: Pontos Turisticos\n");
    printf("5: Densidade Populacional \n");
    printf("6: PIB per capita\n");
    printf("Esolha: \n");
    scanf("%d", &escolha1);

    //Escolhendo o primeiro atributo a ser comparado
    switch (escolha1)
    {
    case 1:
        printf("##Comparando com base na População##\n");
        printf("População da primeira carta: %lu \n" , populacao1);
        printf("População da segunda carta: %lu \n", populacao2);

        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("##Comparando com base na Área##\n");
        printf("Área da primeira carta: %f \n", area1);
        printf("Área da segunda carta: %f \n", area2);
        
        resultado1 = area1 > area2 ? 1 : 0;
        
        break;
    case 3:
        printf("##Comparando com base no PIB##\n");
        printf("PIB da primeira carta: %f \n", pib1);
        printf("PIB da segunda carta: %f \n", pib2);
       
        resultado1 = pib1 > pib2 ? 1 : 0;
        
        break;
    case 4:
        printf("##Comparando com base nos Pontos Turisticos##\n");
        printf("Pontos Turisticos da primeira carta: %d \n", pontos_turisticos1);
        printf("Pontos TUristicos da segunda carta: %d \n", pontos_turisticos2);
        
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        
        break;
    case 5:
        printf("##Comparando com base na densidade populacional##\n");
        printf("Densidade populacional da primeira carta: %f \n", densidade_populacional1);
        printf("Densidade populacional da segunda carta: %f \n", densidade_populacional2);
       
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;

        break;
    case 6:
        printf("##Comparando com base no PIB per capita##\n");
        printf("PIB per capita da primeira carta: %f \n", pib_per_capita1);
        printf("PIB per capita da segunda carta: %f \nB", pib_per_capita2);
        
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    
        break;
    default:
        printf("Opção Invalida\n ");
        break;
    }

    // Verificando se o segundo atributo é igual ao primeiro escolhido
    if(escolha1 == escolha2){
        printf("A comparação deve ser feita com outro atributo");
    }else{

        printf("Escolha qual atributo deseja utilizar para a segunda comparação\n");
        printf("1: População \n");
        printf("2: Área \n");
        printf("3: PIB \n");
        printf("4: Pontos Turisticos\n");
        printf("5: Densidade Populacional \n");
        printf("6: PIB per capita\n");
        printf("Esolha: \n");
        scanf("%d", &escolha2);
    
    //Escolhendo o segundo atributo a ser comparado
    switch (escolha2)
    {
    case 1:
        printf("##Comparando com base na População##\n");
        printf("População da primeira carta: %lu \n" , populacao1);
        printf("População da segunda carta: %lu \n", populacao2);

        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("##Comparando com base na Área##\n");
        printf("Área da primeira carta: %f \n", area1);
        printf("Área da segunda carta: %f \n", area2);
        
        resultado2 = area1 > area2 ? 1 : 0;
        
        break;
    case 3:
        printf("##Comparando com base no PIB##\n");
        printf("PIB da primeira carta: %f \n", pib1);
        printf("PIB da segunda carta: %f \n", pib2);
       
        resultado2 = pib1 > pib2 ? 1 : 0;
        
        break;
    case 4:
        printf("##Comparando com base nos Pontos Turisticos##\n");
        printf("Pontos Turisticos da primeira carta: %d \n", pontos_turisticos1);
        printf("Pontos TUristicos da segunda carta: %d \n", pontos_turisticos2);
        
        resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        
        break;
    case 5:
        printf("##Comparando com base na densidade populacional##\n");
        printf("Densidade populacional da primeira carta: %f \n", densidade_populacional1);
        printf("Densidade populacional da segunda carta: %f \n", densidade_populacional2);
       
        resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;

        break;
    case 6:
        printf("##Comparando com base no PIB per capita##\n");
        printf("PIB per capita da primeira carta: %f \n", pib_per_capita1);
        printf("PIB per capita da segunda carta: %f \n", pib_per_capita2);
        
        resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    
        break;
    default:
        printf("Opção Invalida\n ");
        break;
    }
    }
    
    //Lógica para saber quem ganhou 
    //Se os resultados forem ambos 1 Jogador 1 vence 
    //Se os resultados forem 1 e 0 ou 0 e 1 o jogo ira empatar
    //Se os resultados forem ambos 0 Jogador 2 vence
    if(resultado1 && resultado2){
        printf("Parabéns, o Jogador 1 ganhou!!\n");

    }if(resultado1 != resultado2){
        printf("O jogo empatou!!\n");
    }else{
        printf("Parabéns , o Jogador 2 ganhou!!\n");
    }
}

  
