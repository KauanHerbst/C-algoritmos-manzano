#include <stdio.h>
#include <math.h>

int main(){

    int base, indice, raiz;

    printf("Digite o valor da Base: ");
    scanf("%f", &base);

    printf("Digite o valor do Indice: ");
    scanf("%f", &indice);

    raiz = pow(base,(1/indice));

    printf("Resultado: %d", raiz);

    return 0;
}