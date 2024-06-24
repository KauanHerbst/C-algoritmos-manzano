#include <stdio.h>

int main(){
	
	int us, cotacao, resultado;
    
    printf("Digite o valor de US: ");
    scanf("%d", &us);

    printf("Digite o valor da Cotação: ");
    scanf("%d", &cotacao);

    resultado = us * cotacao;

    printf("Resultado: %d", resultado);
    
	return 0;
}
