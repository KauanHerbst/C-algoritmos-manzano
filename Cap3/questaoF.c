#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite o valor A: ");
	scanf("%d", &a);

    printf("Digite o valor B: ");
	scanf("%d", &b);
	
    c = a;
    a = b;
    b = c; 

    printf("Valor de A: %d, Valor de B: %d", a, b);

	return 0;
}
