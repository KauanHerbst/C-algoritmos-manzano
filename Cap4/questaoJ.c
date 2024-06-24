#include <stdio.h>

int main(){
    int N, RESTO;
    
    printf("Digite o Valor de N: ");
    scanf("%d", &N);

    RESTO = N - 2 * (N / 2);
    
    if(RESTO == 0){
        printf("Valor Par");
    } else {
        printf("Valor Impar");
    }

    return 0;
}