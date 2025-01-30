#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo[20];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Código da carta: \n");
    scanf("%s ", &codigo);

    printf("Nomde da cidade: \n");
    scanf("%s ", &nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f ", &area);
    
    printf("PIB: \n");
    scanf("%f ", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d \n", &pontosturisticos);


    printf("Cadastro realizado com sucesso!");


     
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
