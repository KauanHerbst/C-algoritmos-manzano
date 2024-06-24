#include <stdio.h>

int main(){
	int a, b, c, d, A1, A2, A3, A4, A5, A6, M1, M2, M3, M4, M5, M6;
	printf("Digite o valor A: ");
	scanf("%d", &a);
    printf("Digite o valor B: ");
	scanf("%d", &b);
    printf("Digite o valor C: ");
	scanf("%d", &c);
    printf("Digite o valor D: ");
	scanf("%d", &d);	
    A1 = a + b;
    A2 = a + c;
    A3 = a + d;
    A4 = b + c;
    A5 = b + d;
    A6 = c + d;
    M1 = a * b;
    M2 = a * c;
    M3 = a * d;
    M4 = b * c;
    M5 = b * d;
    M6 = c * d;
    printf("Valor de A1: %d ", A1);
    printf("Valor de A2: %d ", A2);
    printf("Valor de A3: %d ", A3);
    printf("Valor de A4: %d ", A4);
    printf("Valor de A5: %d ", A5);
    printf("Valor de A6: %d ", A6);
    printf("Valor de M1: %d ", M1);
    printf("Valor de M2: %d ", M2);
    printf("Valor de M3: %d ", M3);
    printf("Valor de M4: %d ", M4);
    printf("Valor de M5: %d ", M5);
    printf("Valor de M6: %d ", M6);
	return 0;
}
