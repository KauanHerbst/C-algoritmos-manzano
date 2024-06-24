#include <stdio.h>

#define TAMANHO_MATRIZ 10


int main() {
    int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] * (-1);
    }
    
    printf("Elementos da Matriz B: \n");
    for(int i=0; i < TAMANHO_MATRIZ; i++){
        printf("Valor: %d, \n", matrizB[i]);
    }

    return 0;
}