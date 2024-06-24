#include <stdio.h>

#define TAMANHO 20

int main() {
    float A[TAMANHO];
    float soma = 0.0, menor, maior, media;

    printf("Digite 20 valores para as temperaturas em graus Celsius:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Temperatura %d: ", i + 1);
        scanf("%f", &A[i]);
    }

    menor = maior = A[0];

    for (int i = 0; i < TAMANHO; i++) {
        soma += A[i];
        if (A[i] < menor) {
            menor = A[i];
        }
        if (A[i] > maior) {
            maior = A[i];
        }
    }

    media = soma / TAMANHO;

    printf("\nMenor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Média das temperaturas: %.2f\n", media);

    return 0;
}