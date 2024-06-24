#include <stdio.h>

#define TAMANHO_MATRIZ 10

int main() {
    int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizB[i]);
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int soma = matrizA[i] + matrizB[i];
        matrizC[i] = soma * soma;
    }

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizC[i]);
    }

    return 0;
}