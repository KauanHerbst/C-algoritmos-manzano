#include <stdio.h>
#include <math.h>

int main(){
	
	int numero, resultado;
    printf("Digite o valor do numero para ver ele elevado ao quadrado: ");
    scanf("%d", &numero);
    
    resultado = pow(numero, 2);

    printf("Numero elevado ao quadrado: %d", resultado);
    
	return 0;
}
