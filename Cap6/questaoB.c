#include <stdio.h>

int main(){
    int matrizA[8];
    int matrizB[8];

    for(int i=0; i<8; i++){
        printf("Digite o valor da posicao: %d \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] * 3;
    }

    printf("Numeros da matriz B");
    for(int i=0; i<8; i++){
        printf("%d \n", matrizB[i]);
    }

    return 0;
}