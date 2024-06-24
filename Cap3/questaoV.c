#include <stdio.h>
#include <math.h>

int main(){

    int base, exponte, potencia;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &exponte);

    potencia = pow(base, exponte);

    printf("Resultado: %d", potencia);


    return 0;
}