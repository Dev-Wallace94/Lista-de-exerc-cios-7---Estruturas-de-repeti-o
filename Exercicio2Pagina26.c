#include <stdio.h>

int main() {
    int opcao;
    double total = 0.0;

    do {
        printf("=== COFRINHO DIGITAL ===\n");
        printf("1 - Adicionar moeda de R$ 0,50\n");
        printf("2 - Adicionar moeda de R$ 1,00\n");
        printf("3 - Adicionar moeda de R$ 2,00\n");
        printf("0 - Parar e mostrar o total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                total += 0.50;
                break;
            case 2:
                total += 1.00;
                break;
            case 3:
                total += 2.00;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }

        if (opcao >= 1 && opcao <= 3) {
            printf("Moeda adicionada! Saldo atual: R$ %.2f\n", total);
        }
        printf("\n");

    } while (opcao != 0);

    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}