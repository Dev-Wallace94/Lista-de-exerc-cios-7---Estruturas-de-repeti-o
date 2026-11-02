#include <stdio.h>
#define NUM_MORADORES 5
#define LIMITE_MEDIA 20.0

int main() {
    double consumo, soma = 0.0;

    for (int i = 1; i <= NUM_MORADORES; i++) {
        printf("Morador %d - consumo mensal (m3): ", i);
        scanf("%lf", &consumo);

        if (consumo <= LIMITE_MEDIA) {
            printf("Morador %d: dentro da media (ate %.0f m3)\n\n", i, LIMITE_MEDIA);
        } else {
            printf("Morador %d: ACIMA da media (mais de %.0f m3)\n\n", i, LIMITE_MEDIA);
        }

        soma += consumo;
    }

    printf("Consumo medio geral: %.2f m3\n", soma / NUM_MORADORES);

    return 0;
}