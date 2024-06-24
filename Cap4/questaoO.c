#include <stdio.h>

int main(){
    int A, res;
    
    printf("Digite o Valor de A: ");
    scanf("%d", &A);
    
    res = A * 2;

    if(res >= 30){
        printf("RES: %d", res);
    }

    return 0;
}