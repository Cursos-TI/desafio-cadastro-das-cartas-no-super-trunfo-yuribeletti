#include <stdio.h>

// Variaveis da carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Print e Scan para obter os dados
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
