#include <stdio.h>

#define TAMANHO_MATRIZ 30

int main() {
    int matrizA[TAMANHO_MATRIZ];
    int totalPares = 0;
    int totalImpares = 0;

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizA[i] % 2 == 0 ? totalPares++ : totalImpares++;
    }

    printf("Total elementos pares: %d \n", totalPares);
    printf("Total elementos impares: %d \n", totalImpares);

    return 0;
}