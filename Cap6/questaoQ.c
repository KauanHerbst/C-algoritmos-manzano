#include <stdio.h>

#define TAMANHO_MATRIZ 15

int main() {
    float matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ];
 
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &matrizA[i]);

        matrizB[i] = (i % 2) == 0 ? matrizA[i] / 2 :  matrizA[i] * 1.5;
    }

    printf("Elementos da Matriz B: \n");
    for(int i=0; i < TAMANHO_MATRIZ; i++){
        printf("Valor: %.2f \n", matrizB[i]);
    }

    return 0;
}