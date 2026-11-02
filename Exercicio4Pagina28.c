#include <stdio.h>

#define META_PASSOS 10000

int main() {
    int passos, total = 0, horas = 0;

    while (total < META_PASSOS) {
        horas++;
        printf("Passos dados na hora %d: ", horas);
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Quantidade invalida! Digite um valor maior ou igual a 0.\n");
            horas--;
            continue;
        }

        total += passos;
        printf("Total acumulado: %d passos\n\n", total);
    }

    printf("Meta de %d passos atingida!\n", META_PASSOS);
    printf("Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}