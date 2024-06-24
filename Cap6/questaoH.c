#include <stdio.h>

#define TAMANHO_MATRIZ 20

int main() {
    float MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ];
    int countMatrizA = 0;

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizA[i]);
    }


    for (int i = TAMANHO_MATRIZ - 1; i >= 0; i--){
        MatrizB[i] = MatrizA[countMatrizA];
        countMatrizA++;
    }

    
    printf("Elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f, \n", i + 1, MatrizB[i]);
    }
    

    return 0;
}