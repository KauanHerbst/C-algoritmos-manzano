#include <stdio.h>

#define TAMANHO_MATRIZ 10


int main() {
    int matrizA[TAMANHO_MATRIZ];
    float matrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] / 2;
    }
    
    printf("Elementos das Matrizes: \n");
    for(int i=0; i < TAMANHO_MATRIZ; i++){
        printf("Matriz A: %d Matriz B: %.0f \n", matrizA[i], matrizB[i]);
    }

    return 0;
}