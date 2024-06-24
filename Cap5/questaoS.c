#include <stdio.h>

int main(){
	int quociente, dividendo, divisor = 0;

	printf("Digite o divisor: \n");
	scanf("%d", &divisor);

	printf("Digite o dividendo: \n");
	scanf("%d", &dividendo);

	while(divisor <= dividendo){
		dividendo -= divisor;
		quociente++;
	}

	printf("Quociente: %d", quociente);


}

