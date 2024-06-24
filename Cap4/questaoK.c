#include <stdio.h>

int main(){
    int N;
    
    printf("Digite o Valor de N: ");
    scanf("%d", &N);

   if(N>= 1 && N<=9){
    printf("O valor esta na faixa permitida");
   } else {
    printf("O valor esta fora da faixa permitida");
   }

    return 0;
}