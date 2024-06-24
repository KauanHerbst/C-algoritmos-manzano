#include <stdio.h>

int main(){
    float n, media, soma = 0;
    int total = 0;

    while(n>=0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n >=0){
            soma += n;
            total++;
        }
    }

    if(total > 0){
        media = soma / total;
    }

    printf("media: %f, total: %d, soma: %f", media, total, soma);
}
