#include <stdio.h>

#define TAMANHO_MATRIZ 5

void juntarMatrizes(float a[TAMANHO_MATRIZ], float b[TAMANHO_MATRIZ], float c[TAMANHO_MATRIZ], float result[TAMANHO_MATRIZ * 3]){
    for (int i = 1; i <= TAMANHO_MATRIZ; i++){
        result[i - 1] = a[i - 1];
    }
    for (int i = 1; i <= TAMANHO_MATRIZ; i++){
        result[(TAMANHO_MATRIZ - 1) + i] = b[i - 1];
    }
    for (int i = 1; i <= TAMANHO_MATRIZ; i++){
        result[((TAMANHO_MATRIZ * 2) - 1) + i] = c[i - 1];
    }
}

int main() {
    float MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ], MatrizC[TAMANHO_MATRIZ], MatrizD[TAMANHO_MATRIZ * 3];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizA[i]);
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizB[i]);
    }

    printf("Digite os elementos da matriz C: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizC[i]);
    }

    juntarMatrizes(MatrizA, MatrizB, MatrizC, MatrizD);

    printf("Elementos da matriz D: \n");
    for(int i=0; i<TAMANHO_MATRIZ * 3; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, MatrizD[i]);
    }

    return 0;
}