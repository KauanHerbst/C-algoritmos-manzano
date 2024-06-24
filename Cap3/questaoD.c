#include <stdio.h>

int main(){
	int tempo, velocidade, distancia, litrosUsados;
	
	printf("Digite o tempo gasto: ");
	scanf("%d", &tempo);
	
	printf("Digite a velocidade: ");
	scanf("%d", &velocidade);
	
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	
	printf("Distancia: %d, Litros usados: %d", distancia, litrosUsados);
	
	return 0;
}
