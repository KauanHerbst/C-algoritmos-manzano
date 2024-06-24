#include <stdio.h>

int main(){
    
    int distancia, tempo, velocidade;

    printf("Digite o valor da distancia: ");
    scanf("%d", &distancia);

    printf("Digite o valor do tempo: ");
    scanf("%d", &tempo);

    velocidade = (distancia * 1000) / (tempo * 60);

    printf("Valor velocidade: %d", velocidade);


    return 0;
}