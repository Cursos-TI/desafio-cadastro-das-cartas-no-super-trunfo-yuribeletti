#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    char pais1[100], pais2[100];  // Usar arrays de char para armazenar os nomes dos países
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, densidadeDemografica1, area2, pib2, densidadeDemografica2;
    int atributoEscolhido;

    printf("***Super Trunfo***\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Entrada de dados para o primeiro país
            printf("Digite o nome do primeiro país: \n");
            scanf("%s", pais1);

            printf("Digite a população do %s: \n", pais1);
            scanf("%d", &populacao1);

            printf("Digite a quantidade de pontos turísticos do %s: \n", pais1);
            scanf("%d", &pontosTuristicos1);

            printf("Digite a área do %s (em km²): \n", pais1);
            scanf("%f", &area1);

            printf("Digite o PIB do %s (em bilhões): \n", pais1);
            scanf("%f", &pib1);

            printf("Digite a densidade demográfica do %s (habitantes por km²): \n", pais1);
            scanf("%f", &densidadeDemografica1);

            // Entrada de dados para o segundo país
            printf("Digite o nome do segundo país: \n");
            scanf("%s", pais2);

            printf("Digite a população do %s: \n", pais2);
            scanf("%d", &populacao2);

            printf("Digite a quantidade de pontos turísticos do %s: \n", pais2);
            scanf("%d", &pontosTuristicos2);

            printf("Digite a área do %s (em km²): \n", pais2);
            scanf("%f", &area2);

            printf("Digite o PIB do %s (em bilhões): \n", pais2);
            scanf("%f", &pib2);

            printf("Digite a densidade demográfica do %s (habitantes por km²): \n", pais2);
            scanf("%f", &densidadeDemografica2);

            // Exibir opções para o jogador escolher um atributo
            printf("\nEscolha o atributo para comparação:\n");
            printf("1. População\n");
            printf("2. Pontos Turísticos\n");
            printf("3. Área\n");
            printf("4. PIB\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha uma opção: \n");
            scanf("%d", &atributoEscolhido);

            // Variáveis para armazenar o vencedor
            char *vencedor;
            float valor1, valor2;

            // Comparação com base no atributo escolhido
            switch (atributoEscolhido) {
                case 1:
                    valor1 = populacao1;
                    valor2 = populacao2;
                    printf("\nAtributo: População\n");
                    break;
                case 2:
                    valor1 = pontosTuristicos1;
                    valor2 = pontosTuristicos2;
                    printf("\nAtributo: Pontos Turísticos\n");
                    break;
                case 3:
                    valor1 = area1;
                    valor2 = area2;
                    printf("\nAtributo: Área\n");
                    break;
                case 4:
                    valor1 = pib1;
                    valor2 = pib2;
                    printf("\nAtributo: PIB\n");
                    break;
                case 5:
                    valor1 = densidadeDemografica1;
                    valor2 = densidadeDemografica2;
                    printf("\nAtributo: Densidade Demográfica\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 0;
            }

            // Exibir os valores dos atributos
            printf("%s: %.2f\n", pais1, valor1);
            printf("%s: %.2f\n", pais2, valor2);

            // Determinar o vencedor
            if (atributoEscolhido == 5) {  // Para densidade demográfica, vence o menor valor
                if (valor1 < valor2) {
                    vencedor = pais1;
                } else if (valor1 > valor2) {
                    vencedor = pais2;
                } else {
                    printf("Empate!\n");
                    return 0;
                }
            } else {  // Para os outros atributos, vence o maior valor
                if (valor1 > valor2) {
                    vencedor = pais1;
                } else if (valor1 < valor2) {
                    vencedor = pais2;
                } else {
                    printf("Empate!\n");
                    return 0;
                }
            }

            // Exibir o vencedor
            printf("\nO vencedor é: %s\n", vencedor);
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