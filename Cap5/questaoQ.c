#include <stdio.h>
#include <string.h>

int main(){
 char comodo, condicional[2];
	float largura=0, comprimento=0, area=0, areaSoma=0;
    do{
	printf("Digite o nome do comodo:\n");
	scanf("%s", &comodo);
	printf("Digite o valor da largura:\n");
	scanf("%f", &largura);
	printf("Digite o valor da comprimento:\n");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	areaSoma += area;
	printf("Deseja continuar\n");	
	scanf("%s", &condicional);
	system("cls");
	}
	while(strcmp(condicional, "sim") == 0);
	printf("A soma das areas e: %.2f", areaSoma);
}


