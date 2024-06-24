#include <stdio.h>
#include <math.h>

#define TAMANHO_MATRIZ 15

int main(){
   int MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &MatrizA[i]);
        MatrizB[i] = pow(MatrizA[i], 2); 
    }

    printf("Elementos das Matrizes: \n");
        for(int i=0; i<TAMANHO_MATRIZ; i++){
            printf("Matriz A: %d, Matriz B: %d \n", MatrizA[i], MatrizB[i]);
        
        }

    return 0;
}