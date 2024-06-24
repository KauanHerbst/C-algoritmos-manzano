#include <stdio.h>

int main(){
    int cont, maior=0, menor=0;

	do{
		scanf("%d", &cont);
		if(cont > maior){
			maior = cont;
		} if( cont < menor){
			menor = cont;
		}
	}while(cont > 0);
	printf("O maior valor e: %d\nO menor valor e: %d", maior, menor);
}