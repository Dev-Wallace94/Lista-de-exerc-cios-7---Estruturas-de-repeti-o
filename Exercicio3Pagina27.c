#include <stdio.h>

#define NUM_CLIENTES 10
#define MEDIA_MINIMA 7.0

int main() {
    double nota, soma = 0.0, media;
    int i = 1;

    while (i <= NUM_CLIENTES) {
        printf("Cliente %d - nota de atendimento (0 a 10): ", i);
        scanf("%lf", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            continue;
        }

        soma += nota;
        i++;
    }

    media = soma / NUM_CLIENTES;
    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < MEDIA_MINIMA) {
        printf("ALERTA: a media esta abaixo de %.0f! O atendimento precisa melhorar.\n", MEDIA_MINIMA);
    }

    return 0;
}