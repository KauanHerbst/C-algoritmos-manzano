#include <stdio.h>

int main(){
	int c, r;
	
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d", &c);
	r = (c * 9 / 5) + 32;
	printf("Temperatura em Fahrenheit: %d", r);
	
	return 0;
}
