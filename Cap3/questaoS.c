#include <stdio.h>

int main(){
	
    float a, b, r1, r2, r3, r4;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
	
    printf("Digite o valor de B: ");
    scanf("%f", &b);

    r1 = a + b;
    r2 = a - b;
    r3 = a * b;
    r4 = a / b;

    printf("Resultado R1: %f \n", r1);
    printf("Resultado R2: %f \n", r2);
    printf("Resultado R3: %f \n", r3);
    printf("Resultado R4: %f \n", r4);

	return 0;
}
