#include <stdio.h>
#include <math.h>

int main(){
	
    int a, b, c, d, p, s;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Digite o valor de D: ");
    scanf("%d", &d);

    p = a * c;
    s = b + d;

    printf("Resultado P: %d ", p);
    printf("Resultado S: %d ", s);

	return 0;
}
