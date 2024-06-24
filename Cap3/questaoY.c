#include <stdio.h>

int main(){

    int valor, sucessor, antecessor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    sucessor = valor + 1;
    antecessor = valor - 1;

    printf("sucessor: %d \n", sucessor);
    printf("antecessor: %d \n", antecessor);

    return 0;
}