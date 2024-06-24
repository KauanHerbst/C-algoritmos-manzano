#include <stdio.h>

int main(){
    int A, B, C, D, E, valorMaior, valorMenor;
    
    printf("Digite o Valor de A: ");
    scanf("%d", &A);

    printf("Digite o Valor de B: ");
    scanf("%d", &B);

    printf("Digite o Valor de C: ");
    scanf("%d", &C);

    printf("Digite o Valor de D: ");
    scanf("%d", &D);

    printf("Digite o Valor de E: ");
    scanf("%d", &E);

    valorMaior = A;
    valorMenor = A;

    if(valorMaior<B){
        valorMaior = B;
    }
    if(valorMaior<C){
        valorMaior = C;
    }
    if(valorMaior<D){
        valorMaior = D;
    }
    if(valorMaior<E){
        valorMaior = E;
    }

    if(valorMenor>B){
        valorMenor = B;
    }
     if(valorMenor>C){
        valorMenor = C;
    }
     if(valorMenor>D){
        valorMenor = D;
    }
     if(valorMenor>E){
        valorMenor = E;
    }

    printf("Maior Valor: %d", valorMaior);
    printf("Menor Valor: %d", valorMenor);

    return 0;
}