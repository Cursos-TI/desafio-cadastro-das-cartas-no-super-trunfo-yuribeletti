#include <stdio.h>

int main() {
    int opcao;

    char pais1[100], pais2[100];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, pib1, densidade1;
    float area2, pib2, densidade2;

    int atributo1, atributo2;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int usarSuperPoder;

    printf("\n*** Super Trunfo - Países ***\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nDigite o nome do primeiro país: ");
        scanf(" %[^\n]", pais1);

        printf("População de %s: ", pais1);
        scanf("%lu", &populacao1);

        printf("Pontos turísticos de %s: ", pais1);
        scanf("%d", &pontos1);

        printf("Área de %s (em km²): ", pais1);
        scanf("%f", &area1);

        printf("PIB de %s (em bilhões): ", pais1);
        scanf("%f", &pib1);

        pibPerCapita1 = (populacao1 == 0) ? 0.0f : (pib1 * 1000000000.0f) / populacao1;
        densidade1 = (area1 == 0) ? 0.0f : (float)populacao1 / area1;

        printf("\nDigite o nome do segundo país: ");
        scanf(" %[^\n]", pais2);

        printf("População de %s: ", pais2);
        scanf("%lu", &populacao2);

        printf("Pontos turísticos de %s: ", pais2);
        scanf("%d", &pontos2);

        printf("Área de %s (em km²): ", pais2);
        scanf("%f", &area2);

        printf("PIB de %s (em bilhões): ", pais2);
        scanf("%f", &pib2);

        pibPerCapita2 = (populacao2 == 0) ? 0.0f : (pib2 * 1000000000.0f) / populacao2;
        densidade2 = (area2 == 0) ? 0.0f : (float)populacao2 / area2;

        superPoder1 = (float)populacao1 + pontos1 + area1 + pib1 + pibPerCapita1;
        if (densidade1 != 0.0f) superPoder1 += (1.0f / densidade1);

        superPoder2 = (float)populacao2 + pontos2 + area2 + pib2 + pibPerCapita2;
        if (densidade2 != 0.0f) superPoder2 += (1.0f / densidade2);

        printf("\nEscolha o primeiro atributo:\n");
        printf("1. População\n2. Pontos Turísticos\n3. Área\n4. PIB\n5. Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &atributo1);

        if (atributo1 < 1 || atributo1 > 5) {
            printf("Atributo inválido!\n");
            return 0;
        }

        printf("\nDeseja invocar o Super Poder? (1 = Sim, 0 = Não): ");
        scanf("%d", &usarSuperPoder);

        if (usarSuperPoder == 1) {
            printf("\n--- Super Poder Invocado! ---\n");
            printf("%s: Super Poder = %.2f\n", pais1, superPoder1);
            printf("%s: Super Poder = %.2f\n", pais2, superPoder2);

            if (superPoder1 > superPoder2)
                printf("\n%s venceu com o Super Poder!\n", pais1);
            else if (superPoder2 > superPoder1)
                printf("\n%s venceu com o Super Poder!\n", pais2);
            else
                printf("\nEmpate no Super Poder!\n");

        } else {
            printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
            for (int i = 1; i <= 5; i++) {
                if (i != atributo1) {
                    printf("%d. %s\n", i,
                        (i == 1) ? "População" :
                        (i == 2) ? "Pontos Turísticos" :
                        (i == 3) ? "Área" :
                        (i == 4) ? "PIB" : "Densidade Demográfica");
                }
            }
            printf("Opção: ");
            scanf("%d", &atributo2);

            if (atributo2 < 1 || atributo2 > 5 || atributo1 == atributo2) {
                printf("Atributo inválido!\n");
                return 0;
            }

            valor1_1 = (atributo1 == 1) ? populacao1 :
                       (atributo1 == 2) ? pontos1 :
                       (atributo1 == 3) ? area1 :
                       (atributo1 == 4) ? pib1 : densidade1;

            valor2_1 = (atributo1 == 1) ? populacao2 :
                       (atributo1 == 2) ? pontos2 :
                       (atributo1 == 3) ? area2 :
                       (atributo1 == 4) ? pib2 : densidade2;

            valor1_2 = (atributo2 == 1) ? populacao1 :
                       (atributo2 == 2) ? pontos1 :
                       (atributo2 == 3) ? area1 :
                       (atributo2 == 4) ? pib1 : densidade1;

            valor2_2 = (atributo2 == 1) ? populacao2 :
                       (atributo2 == 2) ? pontos2 :
                       (atributo2 == 3) ? area2 :
                       (atributo2 == 4) ? pib2 : densidade2;

            int pontosGanho1 = 0, pontosGanho2 = 0;

            if (atributo1 == 5) {
                if (valor1_1 < valor2_1) pontosGanho1++;
                else if (valor1_1 > valor2_1) pontosGanho2++;
            } else {
                if (valor1_1 > valor2_1) pontosGanho1++;
                else if (valor1_1 < valor2_1) pontosGanho2++;
            }

            if (atributo2 == 5) {
                if (valor1_2 < valor2_2) pontosGanho1++;
                else if (valor1_2 > valor2_2) pontosGanho2++;
            } else {
                if (valor1_2 > valor2_2) pontosGanho1++;
                else if (valor1_2 < valor2_2) pontosGanho2++;
            }

            if (pontosGanho1 == 2) {
                printf("\n%s venceu a rodada!\n", pais1);
            } else if (pontosGanho2 == 2) {
                printf("\n%s venceu a rodada!\n", pais2);
            } else {
                printf("\nEmpate na rodada!\n");
            }
        }

    } else if (opcao == 2) {
        printf("Saindo do jogo...\n");
        return 0;
    } else {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("Obrigado por jogar!\n");
    return 0;
}