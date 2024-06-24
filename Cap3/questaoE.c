#include <stdio.h>

int main(){
	
	int valor, taxa, tempo, prestacao;
	
	printf("Digite o valor: ");
	scanf("%d", &valor);
	
	printf("Digite a taxa: ");
	scanf("%d", &taxa);
	
	printf("Digite o tempo: ");
	scanf("%d", &tempo);
	
	prestacao = valor + (valor * ((taxa / 100) * tempo));
	
	printf("Valor Prestação: %d", prestacao);
	
	return 0;
}
