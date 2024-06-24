#include <stdio.h>

int main(){
    int N;

    printf("Digite o Valor de N: ");
    scanf("%d", &N);

    if(N<0){
        N = N * (-1);
    }

    printf("Resultado: %d", N);

    return 0;
}