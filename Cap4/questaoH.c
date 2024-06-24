#include <stdio.h>

int main(){
    int A, B, C, D, RESTO2, RESTO3;
    
    printf("Digite o Valor de A: ");
    scanf("%d", &A);

    printf("Digite o Valor de B: ");
    scanf("%d", &B);

    printf("Digite o Valor de C: ");
    scanf("%d", &C);

    printf("Digite o Valor de D: ");
    scanf("%d", &D);

    RESTO2 = A - 2 * (A / 2);
    RESTO3 = A - 2 * (A / 2);

    if(RESTO2 == 0 && RESTO3 == 0){
        printf("Valor de A: %d", A);
    }

    RESTO2 = B - 2 * (B / 2);
    RESTO3 = B - 2 * (B / 2);

    if(RESTO2 == 0 && RESTO3 == 0){
        printf("Valor de C: %d", B);
    }

    RESTO2 = C - 2 * (C / 2);
    RESTO3 = C - 2 * (C / 2);

    if(RESTO2 == 0 && RESTO3 == 0){
        printf("Valor de C: %d", C);
    }
    
    RESTO2 = D - 2 * (D / 2);
    RESTO3 = D - 2 * (D / 2);

    if(RESTO2 == 0 && RESTO3 == 0){
        printf("Valor de D: %d", D);
    }

    return 0;
}