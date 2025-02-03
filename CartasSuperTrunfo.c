#include <stdio.h>

#define MAX_CARTAS 100

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
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
} Carta;

void cadastrarCartas(Carta cartas[], int *quantidade) {
    printf("\nCadastro de Cartas do Super Trunfo - Países\n");
    for (int i = 0; i < MAX_CARTAS; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);

        // Leitura do estado
        printf("\n Digite a letra do estado (A-H): ");
        scanf(" %c", cartas[i].estado);

            // Leitura da cidade
        printf("\n Digite o número da cidade (1=4): ");
        scanf(" %d", cartas[i].cidade);  

            // Leitura do nome da cidade
         printf("Digite o nome da cidade: ");
        scanf("%s", cartas[i].nome);

            // Leitura da população
        printf("População (em milhões): ");
        scanf("%d", &cartas[i].populacao);

            // Leitura da área
        printf("Área (em milhões de km²): ");
        scanf("%f", &cartas[i].area);

        
         // Leitura do número de pontos turísticos
        printf("\ndigite o número de pontos turísticos: ");
        scanf("%d", cartas[i].pontosturisticos);
 
            // Leitura do PIB
        printf("PIB (em trilhões de dólares): ");
        scanf("%d", &cartas[i].pib);

        printf("IDH (de 0 a 1, multiplicado por 1000): ");
        scanf("%f", &cartas[i].pib_per_capita);
        (*quantidade)++;
    }
}
    void exibirCartas(Carta cartas[], int quantidade) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %d milhões\n", cartas[i].populacao);
        printf("Área: %.2f milhões de km²\n", cartas[i].area);
        printf("PIB: %d trilhões de dólares\n", cartas[i].pib);
        printf("IDH: %.3f\n", cartas[i].idh / 1000.0);
    }
}

int main() {
    Carta cartas[MAX_CARTAS];
    int quantidade = 0;

    cadastrarCartas(cartas, &quantidade);
    exibirCartas(cartas, quantidade);

    

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