#include <stdio.h>

int main(){
    int n;
    float media;
    int soma = 0;
    int l = 1;

    while(l<=10){
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
        l++;
    }

    media = soma / 10;
    printf("soma: %f", soma);
}
