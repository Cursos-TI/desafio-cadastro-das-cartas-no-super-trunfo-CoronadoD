#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado;
    char codigo[3]; // Exemplo: "A1", "B3"
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Leitura do estado
    printf("\n Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    // Leitura da cidade
    printf("\n Digite o número da cidade (1=4): ");
    scanf(" %d", &cidade);  

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
    printf("\nCarta cadastrada com sucesso!\n");

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados\n");

    printf("Código da carta: %c%d \n", estado, cidade);

    printf("Estado: %c\n", estado);
    printf("Número da cidade: %d\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;
}