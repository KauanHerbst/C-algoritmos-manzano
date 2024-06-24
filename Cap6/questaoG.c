#include <stdio.h>
#include <string.h>

#define TAMANHO_A 20
#define TAMANHO_B 30
#define TAMANHO_C 50
#define TAMANHO_NOME 100

int main() {
    char MatrizA[TAMANHO_A][TAMANHO_NOME];
    char MatrizB[TAMANHO_B][TAMANHO_NOME];
    char MatrizC[TAMANHO_C][TAMANHO_NOME];
    int i;

    printf("Digite os nomes para a matriz A:\n");
    for (i = 0; i < TAMANHO_A; i++) {
        printf("Matriz A[%d]: ", i);
        fgets(MatrizA[i], TAMANHO_NOME, stdin);
    }

    printf("Digite os nomes para a matriz B:\n");
    for (i = 0; i < TAMANHO_B; i++) {
        printf("Matriz B[%d]: ", i);
        fgets(MatrizB[i], TAMANHO_NOME, stdin);
    }

    for (i = 0; i < TAMANHO_A; i++) {
        strcpy(MatrizC[i], MatrizA[i]);
    }
    for (i = 0; i < TAMANHO_B; i++) {
        strcpy(MatrizC[i + TAMANHO_A], MatrizB[i]);
    }

    printf("\nOs elementos da matriz C são:\n");
    for (i = 0; i < TAMANHO_C; i++) {
        printf("Matriz C[%d] = %s\n", i, MatrizC[i]);
    }

    return 0;
}