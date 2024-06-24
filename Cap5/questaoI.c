#include <stdio.h>

int main(){
    int b, e;
    int p, l = 1;

    printf("Digite o valor da base: ");
    scanf("%d", &b);

    printf("Digite o valor do expoente: ");
    scanf("%d", &e);

    while(l<=e){
        p *= b;
        l++;
    }
    
    printf("Resultado potencia: %d", p);
}