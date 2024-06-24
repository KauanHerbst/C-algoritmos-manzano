#include <stdio.h>

#define TAMANHO_MATRIZ 15

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){
   int MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &MatrizA[i]);
        MatrizB[i] = fatorial(MatrizA[i]); 
    }

    printf("Elementos daS Matrizes: \n");
        for(int i=0; i<TAMANHO_MATRIZ; i++){
            printf("Matriz A: %d, Matriz B: %d \n", MatrizA[i], MatrizB[i]);
        
        }

    return 0;
}