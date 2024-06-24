#include <stdio.h>

#define TAMANHO_MATRIZ 10

int main() {
    int numero;
    int resultadoTabuada[TAMANHO_MATRIZ];

    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &numero);

    printf("Resultado Tabuada: \n");
    for (int i = 1; i <= 10; i++){
        resultadoTabuada[i - 1] = i * numero;
        printf("%d X %d = %d \n", i, numero, resultadoTabuada[i - 1]);
    }

    return 0;
}