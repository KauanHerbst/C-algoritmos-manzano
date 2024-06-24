#include <stdio.h>

int main(){
    int n, r;
    int L = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(L<=10){
        r = n * L;
        printf("%d X %d = %d \n", n, L, r);
        L++;
    }
}