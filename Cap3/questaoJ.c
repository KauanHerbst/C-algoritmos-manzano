#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b, resultado;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    resultado = pow((a - b), 2);

    printf("Resultado: %d", resultado);
    
	return 0;
}
