#include <stdio.h>

#define TAMANHO_MATRIZ 5

int somatorio(int numero){
   int soma = 0;
   for(int i=numero; i > 0; i--){
    soma += i;
   }
   return soma;
}

int main() {
    int MatrizA[TAMANHO_MATRIZ], MatrizB[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &MatrizA[i]);
        MatrizB[i] = somatorio(MatrizA[i]);
    }

    printf("Elementos da Matriz B: \n");
    for(int i=0; i < TAMANHO_MATRIZ; i++){
        printf("Valor: %d, \n", MatrizB[i]);
    }

    return 0;
}