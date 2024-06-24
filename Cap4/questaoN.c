#include <stdio.h>

int main(){
    int A, B, C, res;
    
    printf("Digite o Valor de A: ");
    scanf("%d", &A);

    printf("Digite o Valor de B: ");
    scanf("%d", &B);

    printf("Digite o Valor de C: ");
    scanf("%d", &C);

    res = A + B + C;

    if(res >= 100){
        printf("RES: %d", res);
    }

    return 0;
}