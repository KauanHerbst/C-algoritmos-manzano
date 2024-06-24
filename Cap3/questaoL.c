#include <stdio.h>

int main(){
	
	int us, real, cotacao;
    
    printf("Digite o valor de real: ");
    scanf("%d", &real);

    printf("Digite o valor da Cotação: ");
    scanf("%d", &cotacao);

    us = real / cotacao;

    printf("Resultado: %d", us);

	return 0;
}
