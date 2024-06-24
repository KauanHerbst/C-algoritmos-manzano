#include <stdio.h>

int main(){
  int cont,x;
	double fatorial = 1;
	for(cont=0; cont <10; cont++){
		if(cont%2!=0){
			for(x=1; x<=cont; x++){
			fatorial *= x;
		}
		printf("%d! = %.2lf\n", cont, fatorial);
		}
	} 
}

