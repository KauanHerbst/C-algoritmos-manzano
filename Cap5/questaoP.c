#include <stdio.h>

int main(){
  float cont,soma=0;
	for(cont=50; cont < 70; cont++){
		soma += cont;
	}
	printf("A soma e: %.0f\nA media e: %.2f", soma, soma/20);
}

