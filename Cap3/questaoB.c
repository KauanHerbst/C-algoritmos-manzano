#include <stdio.h>

int main(){
	int f, r;
	
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%d", &f);
	r = ((f - 32) * 5) / 9;
	printf("Temperatura em Celsius: %d", r);
	
	return 0;
}
