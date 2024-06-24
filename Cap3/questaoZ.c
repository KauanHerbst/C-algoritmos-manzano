#include <stdio.h>
#include <math.h>

int main(){

    float a, b, resultado;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    resultado = pow((a / b), 2);

    printf("Resultado: %f", resultado);


    return 0;
}