#include <stdio.h>

int main(){

    double pes, metros;

    printf("Digite o valor em pes: ");
    scanf("%lf", &pes);

    metros = pes * 0.3048;

    printf("Resultado em metros: %f", metros);

    return 0;
}