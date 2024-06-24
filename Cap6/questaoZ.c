#include <stdio.h>

#define TAMANHO_MATRIZ 10

int main() {
    int matrizA[TAMANHO_MATRIZ];
    int totalImpares = 0;
    float percentualImapares = 0;
 
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);

         if (matrizA[i] % 2 != 0) {
            totalImpares++;
        }
    }

    percentualImapares = (totalImpares / (float)TAMANHO_MATRIZ) * 100;

    printf("elementos impares: %d \n", totalImpares);
    printf("Percentual: %.2f \n", percentualImapares);

    return 0;
}