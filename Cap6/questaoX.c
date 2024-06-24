#include <stdio.h>

#define TAMANHO_MATRIZ 6

int main() {
    float matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ];
    
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &matrizA[i]);
    }

    for(int i=0; i<TAMANHO_MATRIZ; i++){
        matrizB[i] = i % 2 == 0 ? matrizA[i + 1] : matrizA[i - 1];
    }

    printf("Elementos da matriz A: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizA[i]);
    }

    printf("Elementos da matriz B: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizB[i]);
    }

    return 0;
}