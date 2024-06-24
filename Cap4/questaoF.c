#include <stdio.h>

int main(){
    int A, B, C, X;
    
    printf("Digite o Valor de A: ");
    scanf("%f", &A);

    printf("Digite o Valor de B: ");
    scanf("%f", &B);

    printf("Digite o Valor de C: ");
    scanf("%f", &C);

    if(A>B){
        X = A;
        A = B;
        B = X;
    }

    if(A>C){
        X = A;
        A = C;
        C = X;
    }

    if(B>C){
        X = B;
        B = C;
        C = X;
    }

    printf("Valor de A: %d", A);
    printf("Valor de B: %d", B);
    printf("Valor de C: %d", C);

    return 0;
}