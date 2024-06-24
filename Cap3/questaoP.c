#include <stdio.h>
#include <math.h>

int main(){
	
    int sm, pr, ns;

    printf("Digite o valor de SM: ");
    scanf("%d", &sm);

    printf("Digite o valor de PR: ");
    scanf("%d", &pr);

    ns = sm + sm * pr / 100;

    printf("Resultado NS: %d ", ns);

	return 0;
}
