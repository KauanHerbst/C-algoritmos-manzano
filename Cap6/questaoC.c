#include <stdio.h>

#define TAMANHO_MATRIZ 20

int main(){
    float MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ], MatrizC[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizA[i]);
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &MatrizB[i]);
        MatrizC[i] = MatrizA[i] - MatrizB[i];
    }
    
    printf("Elementos da Matriz C: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d, valor: %.2f, \n", i + 1, MatrizC[i]);
    
    }
   
    return 0;
}