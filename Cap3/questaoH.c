#include <stdio.h>

int main(){
	
	int comprimento, largura, altura, volume;
	
	printf("Digite o valor do comprimento: ");
	scanf("%d", &comprimento);

    printf("Digite o valor da largura: ");
	scanf("%d", &largura);

	printf("Digite o valor da altura: ");
	scanf("%d", &altura);
	
    volume = comprimento * largura * altura;
    
    printf("Valor do Volume: %d", volume);
    
	return 0;
}
