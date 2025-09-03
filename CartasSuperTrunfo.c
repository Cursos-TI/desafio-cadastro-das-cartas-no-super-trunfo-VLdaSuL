#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        
        //Entranda das variaveis;
        int turistico1, turistico2;
        int populacao1, populacao2;
        float pib1, pib2, area1, area2;
        char estado1[15], estado2[15], codigo1[5], codigo2[5]; 
        char cidade1[15], cidade2[15];
        double densidade1, densidade2, percapita1, percapita2;


        //Cadastrando primeira carta;
        printf("Cadastrando primeira carta: \n");

        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
        scanf("%s", estado1);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico1);

        //Cadastrando segunda carta;
        printf("Cadastrando segunda carta: \n");

        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
        scanf("%s", estado2);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
        printf("Digite a população: \n");
        scanf("%d", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico2);

                //Cartas do jogo;
        printf("\nCartas Cadastradas:\n");

        //Impressão primeira carta;
        printf("\nCARTA 1\n");
        printf("Nome do Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", turistico1);

        //Impressão segunda carta
        printf("\nCARTA 2\n");
        printf("Nome do Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turistico2);

    return 0;
}
