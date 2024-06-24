#include <stdio.h>
#include <math.h>

int main(){
	
    int a, b, c, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    resultado = pow((a+b+c), 2);

    printf("Resultado: %d", resultado);

	return 0;
}
