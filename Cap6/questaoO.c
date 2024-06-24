#include <stdio.h>

#define TAMANHO_MATRIZ 25

float conversorTemperatura(float numero){
    return numero * 9.0 / 5.0 + 32;
}

int main() {
   float matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = conversorTemperatura(matrizA[i]);
    }

    printf("Temperaturas em Celsius e suas correspondentes em Fahrenheit:\n");
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("Matriz A: %d = %.2f , Matriz B %d = %.2f \n", i, matrizA[i], i, matrizB[i]);
    }

    return 0;
}