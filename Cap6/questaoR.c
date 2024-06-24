#include <stdio.h>

#define TAMANHO_MATRIZ 6

int main() {
    int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ], matrizD[TAMANHO_MATRIZ];
    int countMatrizC, countMatrizD = 0;

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

    for (int i = 0; i < TAMANHO_MATRIZ; i++){
        if(i % 2 != 0){
            matrizC[countMatrizC] = matrizA[i];
            countMatrizC++;
        } else {
            matrizD[countMatrizD] = matrizA[i];
            countMatrizD++;
        }
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++){
        if(i % 2 != 0){
            matrizC[countMatrizC] = matrizB[i];
            countMatrizC++;
        } else {
            matrizD[countMatrizD] = matrizB[i];
            countMatrizD++;
        }
    }

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizC[i]);
    }

    printf("Elementos da matriz D: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizD[i]);
    }

    return 0;
}