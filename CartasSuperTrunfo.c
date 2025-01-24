#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char codigo[4]; // Código da cidade (ex.: A01, B02)
    int populacao;
    float area, pib;
    int pontos_turisticos;

    // Área para entrada de dados
    printf("Bem-vindo ao cadastro de cartas Super Trunfo - Países!\n\n");

    printf("Digite o código da cidade (exemplo: A01): ");
    scanf("%s", codigo);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões ): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Área para exibição dos dados da cidade
    printf("Dados cadastrados:\n");
    printf("  Código: %s\n", codigo);
    printf("  População: %d\n", populacao);
    printf("  Área: %.2f km²\n", area);
    printf("  PIB: %.2f bilhões de USD\n", pib);
    printf("  Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}


