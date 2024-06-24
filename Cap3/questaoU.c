#include <stdio.h>
#include <math.h>

int main(){

    float raio, volume;

    printf("Digite o Valor do Raio: ");
    scanf("%f", &raio);

    volume = (4/3) * 3.14159 * pow(raio, 3);

    printf("Valor do volume: %f", volume);

    return 0;
}