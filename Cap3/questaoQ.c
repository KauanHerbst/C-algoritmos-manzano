#include <stdio.h>
#include <math.h>

int main(){
	
    float r, a;

    printf("Digite o valor de R: ");
    scanf("%f", &r);

    a = 3.14159 * pow(r, 2);
  
    printf("Resultado A: %f ", a);

	return 0;
}
