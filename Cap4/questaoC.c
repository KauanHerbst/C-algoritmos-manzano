#include <stdio.h>

int main(){
    int N1,N2,N3,N4,MD;
    
    printf("Digite o Valor de N1: ");
    scanf("%d", &N1);

    printf("Digite o Valor de N2: ");
    scanf("%d", &N2);

    printf("Digite o Valor de N3: ");
    scanf("%d", &N3);

    printf("Digite o Valor de N4: ");
    scanf("%d", &N4);

    MD = (N1 + N2 + N3 + N4) / 4;

    if(MD>=5){
        printf("Aluno Aprovado: %d", MD);
    } else {
        printf("Aluno Reprovado: %d", MD);
    }

    return 0;
}