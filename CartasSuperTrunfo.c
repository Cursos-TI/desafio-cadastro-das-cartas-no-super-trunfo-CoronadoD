#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[2];
    char codigo[20];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Leitura do estado (um único caractere)
    printf("\nEstado: ");
    scanf("%s", &estado);  // O espaço antes de %c resolve o problema do caractere '\n' no buffer
        
    // Leitura do código da carta (sem espaços)
    printf("\nCódigo da carta: ");
    scanf("%s", &codigo);  // O uso de %s é adequado para ler strings simples sem espaços

    // Leitura do nome da cidade (permitindo espaços)
    printf("\nNome da cidade: ");
    scanf("%s", &nomedacidade);  // Usando fgets para permitir espaços

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
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;
}