#include <stdio.h>

#define MAX_CARTAS 100

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Gerar código da carta
    char estado; // Exemplo: "A", "B"
    int cidade; // Exemplo: "1", "3"
    char codigo[3]; // Exemplo: "A1", "B3"

    // Informações da cidade
    char nome[20]; // Exemplo: São Paulo
    int populacao; // Exemplo: 12325000
    float area; // Exemplo: 1521.11
    float densidade_populacional; // Exemplo: Tem que gerar como resultado 8101.19
    float pib; // Exemplo: 699.28
    float pib_per_capita; // Exemplo: Tem que gerar como resultado 56749
    int pontosturisticos; // Exemplo: 50

    // Leitura do estado
    printf("\n Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    // Leitura da cidade
    printf("\n Digite o número da cidade (1=4): ");
    scanf(" %d", &cidade);  

    // Leitura do nome da cidade
    printf("\n Digite o nome da cidade:");
    scanf(" %s", &nome);

    // Leitura da população
    printf("\n Digite a população: ");
    scanf("%d", &populacao);

    // Leitura da área
    printf("\n Digite a área em km²: ");
    scanf("%f", &area);

    // Leitura do PIB
    printf("\n Digite o PIB: ");
    scanf("%f", &pib);

    // Leitura do número de pontos turísticos
    printf("\ndigite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);
 
    // Exibição do cadastro realizado
    printf("\nCarta cadastrada com sucesso!\n");

    // Exibição dos dados cadastrados
    printf("Os dados cadastrados são: \n");

    printf("Estado: %c\n", estado);
    printf("Código da carta: %c%d \n", estado, cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB: %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;
}


/* Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
Densidade Populacional: 8101.19 pessoas/km²
PIB: 699.28 bilhões de reais
PIB per Capita: 56749 reais
Número de Pontos Turísticos: 50
*/