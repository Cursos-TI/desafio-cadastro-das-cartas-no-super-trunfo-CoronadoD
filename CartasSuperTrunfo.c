#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Gerar código da carta
    char estado; // Exemplo: "A", "B"
    int cidade; // Exemplo: "1", "3"

    // Informações da cidade
    char nome[20]; // Exemplo: São Paulo
    int populacao; // Exemplo: 12325000
    float area; // Exemplo: 1521.11
    float densidade_populacional; // Exemplo: Tem que gerar como resultado 8101.19
    float pib; // Exemplo: 699.28
    float pib_per_capita; // Exemplo: Tem que gerar como resultado 56749
    int pontosturisticos; // Exemplo: 50
    float super_poder; // Exemplo: Comparação das cartas


    // Leitura do estado
    printf("\nDigite a letra do estado (A-H): ");
    scanf("%s", &estado);
   // Leitura do número da cidade
    printf(" Digite o número da cidade (1-4): ");
    scanf(" %d", &cidade);  

    // Leitura do nome da cidade
    printf("\nNome da cidade: ");
    scanf("%s", &nome);  
    // Leitura da população
    printf("\nPopulação: ");
    scanf("%d", &populacao);

    // Leitura da área
    printf("\nÁrea em km²: ");
    scanf("%f", &area);

    // Leitura do PIB
    printf("\nPIB: ");
    scanf("%f", &pib);

    // Leitura do número de pontos turísticos
    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &pontosturisticos);



    // Exibição do cadastro realizado
    printf("\nCadastro realizado com sucesso!\n");

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c%d\n", estado, cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;
}