#include <stdio.h>

#define TAMANHO_MATRIZ 15

int main() {
    int matrizA[TAMANHO_MATRIZ];
    int totalPares = 0;
    
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);

         if (matrizA[i] % 2 == 0) {
            totalPares++;
        }
    }

    printf("elementos pares: %d \n", totalPares);

    return 0;
}