#include <stdio.h>
#include <math.h>

int main(){
	float r, altura, volume;
	
	printf("Digite o raio da lata: ");
	scanf("%f", &r);
	
	printf("Digite a altura da lata: ");
	scanf("%f", &altura);
	
	volume = 3.14 * pow(r, 2) * altura;
	
	printf("Volume da lata: %f", volume);
	
	return 0;
}
