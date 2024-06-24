#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, D, X1, X2;
    
    printf("Digite o Valor de A: ");
    scanf("%f", &A);

    printf("Digite o Valor de B: ");
    scanf("%f", &B);

    printf("Digite o Valor de C: ");
    scanf("%f", &C);

    if(A == 0 && B == 0 && C == 0){
        printf("Não é uma equação completa do segundo grau");
    } else {
        D = pow(B,2) - 4 * A * C;

        if(D>0){
            X1 = pow((-B+D),(1/2)) / (2*A);
            X2 = pow((-B-D),(1/2)) / (2*A);

            printf("Valor de X1: %f", X1);
            printf("Valor de X2: %f", X2);

        } else {
            printf("Não existem raizes reais");
        }
    }

    return 0;
}