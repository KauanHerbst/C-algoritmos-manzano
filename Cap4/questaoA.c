#include <stdio.h>

int main(){
    int A,B, dif;

    printf("Digite o Valor de A: ");
    scanf("%d", &A);

    printf("Digite o Valor de B: ");
    scanf("%d", &B);

    if(A>B){
        dif = A - B;
    } else {
        dif = B - A;
    }
    
    printf("Diferenca: %d", dif);

    return 0;
}