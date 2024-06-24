#include <stdio.h>

#define TAMANHO_MATRIZ 12

void juntarMatrizes(int a[TAMANHO_MATRIZ], int b[TAMANHO_MATRIZ], int result[TAMANHO_MATRIZ * 2]){
    for (int i = 0; i < TAMANHO_MATRIZ; i++){
        result[i] = a[i];
    }
    for (int i = 1; i <= TAMANHO_MATRIZ; i++){
        result[(TAMANHO_MATRIZ - 1) + i] = b[i - 1];
    }
}

int main() {
    int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ * 2];

    printf("Digite os elementos da matriz A (apenas numeros divisiveis por 2 ou 3): \n");
    for(int i=0; i<TAMANHO_MATRIZ;){
        int valor;
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &valor);

        if(valor % 2 == 0 || valor % 3 == 0){
            matrizA[i] = valor;
            i++;
        } else {
            printf("Digite um numero valido! \n"); 
        }

    }

    printf("Digite os elementos da matriz B (apenas numeros não multiplos de 5): \n");
    for(int i=0; i<TAMANHO_MATRIZ;){
        int valor;
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &valor);

        if(valor % 5 != 0){
            matrizB[i] = valor;
            i++;
        } else {
            printf("Digite um numero valido! \n"); 
        }
    }

    juntarMatrizes(matrizA, matrizB, matrizC);

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ * 2; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizC[i]);
    }

    return 0;
}