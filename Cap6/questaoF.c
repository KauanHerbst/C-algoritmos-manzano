#include <stdio.h>

#define TAMANHO_MATRIZ 15

int main(){
    int MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ], MatrizC[30];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &MatrizA[i]);
        MatrizC[i] = MatrizA[i];
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=14; i<30; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &MatrizB[i]);
        MatrizC[i] = MatrizB[i];
    }

    printf("Elementos da Matriz C: \n");
    for(int i=0; i<30; i++){
        printf("Valor: %d, \n", MatrizC[i]);
    }
  
    return 0;
}