#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Para a função strcspn

int main() {
    int opcao;
    char pais1[100], pais2[100];  // Usar arrays de char para armazenar os nomes dos países
    unsigned long int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, densidadeDemografica1, area2, pib2, densidadeDemografica2;
    int atributoEscolhido;

    printf("***Super Trunfo***\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    // Limpa o buffer de entrada
    getchar();

    switch (opcao) {
        case 1:
            // Entrada de dados para o primeiro país
            printf("Digite o nome do primeiro país: \n");
            fgets(pais1, sizeof(pais1), stdin);
            pais1[strcspn(pais1, "\n")] = '\0';  // Remove a quebra de linha

            printf("Digite a população do %s: \n", pais1);
            scanf("%lu", &populacao1);

            printf("Digite a quantidade de pontos turísticos do %s: \n", pais1);
            scanf("%lu", &pontosTuristicos1);

            printf("Digite a área do %s (em km²): \n", pais1);
            scanf("%f", &area1);

            printf("Digite o PIB do %s (em bilhões): \n", pais1);
            scanf("%f", &pib1);

            // Calcular a densidade demográfica para o pais1
            densidadeDemografica1 = (float)populacao1 / area1;

            // Entrada de dados para o segundo país
            getchar();  // Limpa o buffer de entrada antes de ler o nome do segundo país
            printf("Digite o nome do segundo país: \n");
            fgets(pais2, sizeof(pais2), stdin);
            pais2[strcspn(pais2, "\n")] = '\0';  // Remove a quebra de linha

            printf("Digite a população do %s: \n", pais2);
            scanf("%lu", &populacao2);

            printf("Digite a quantidade de pontos turísticos do %s: \n", pais2);
            scanf("%lu", &pontosTuristicos2);

            printf("Digite a área do %s (em km²): \n", pais2);
            scanf("%f", &area2);

            printf("Digite o PIB do %s (em bilhões): \n", pais2);
            scanf("%f", &pib2);

            // Calcular a densidade demográfica para o pais2
            densidadeDemografica2 = (float)populacao2 / area2;

            // Exibir opções para o jogador escolher um atributo
            printf("\nEscolha o atributo para comparação:\n");
            printf("1. População\n");
            printf("2. Pontos Turísticos\n");
            printf("3. Área\n");
            printf("4. PIB\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha uma opção: \n");
            scanf("%d", &atributoEscolhido);

            // Limpa o buffer de entrada após o scanf de um número
            getchar();

            // Comparação dentro de cada case
            switch (atributoEscolhido) {
                case 1: {  // População
                    printf("\nAtributo: População\n");
                    printf("%s: %lu\n", pais1, populacao1);
                    printf("%s: %lu\n", pais2, populacao2);
                    if (populacao1 > populacao2) {
                        printf("\nO vencedor é: %s\n", pais1);
                    } else if (populacao1 < populacao2) {
                        printf("\nO vencedor é: %s\n", pais2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                }
                case 2: {  // Pontos Turísticos
                    printf("\nAtributo: Pontos Turísticos\n");
                    printf("%s: %lu\n", pais1, pontosTuristicos1);
                    printf("%s: %lu\n", pais2, pontosTuristicos2);
                    if (pontosTuristicos1 > pontosTuristicos2) {
                        printf("\nO vencedor é: %s\n", pais1);
                    } else if (pontosTuristicos1 < pontosTuristicos2) {
                        printf("\nO vencedor é: %s\n", pais2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                }
                case 3: {  // Área
                    printf("\nAtributo: Área\n");
                    printf("%s: %.2f km²\n", pais1, area1);
                    printf("%s: %.2f km²\n", pais2, area2);
                    if (area1 > area2) {
                        printf("\nO vencedor é: %s\n", pais1);
                    } else if (area1 < area2) {
                        printf("\nO vencedor é: %s\n", pais2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                }
                case 4: {  // PIB
                    printf("\nAtributo: PIB\n");
                    printf("%s: %.2f bilhões\n", pais1, pib1);
                    printf("%s: %.2f bilhões\n", pais2, pib2);
                    if (pib1 > pib2) {
                        printf("\nO vencedor é: %s\n", pais1);
                    } else if (pib1 < pib2) {
                        printf("\nO vencedor é: %s\n", pais2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                }
                case 5: {  // Densidade Demográfica
                    printf("\nAtributo: Densidade Demográfica\n");
                    printf("%s: %.2f habitantes por km²\n", pais1, densidadeDemografica1);
                    printf("%s: %.2f habitantes por km²\n", pais2, densidadeDemografica2);
                    if (densidadeDemografica1 < densidadeDemografica2) {  // Menor vence
                        printf("\nO vencedor é: %s\n", pais1);
                    } else if (densidadeDemografica1 > densidadeDemografica2) {
                        printf("\nO vencedor é: %s\n", pais2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                }
                default:
                    printf("Opção inválida!\n");
                    break;
            }
            break;

        case 2:
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}