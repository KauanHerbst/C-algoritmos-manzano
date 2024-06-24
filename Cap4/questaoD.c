#include <stdio.h>

int main(){
    int N1,N2,N3,N4,MD, novaMD, EX;
    
    printf("Digite o Valor de N1: ");
    scanf("%d", &N1);

    printf("Digite o Valor de N2: ");
    scanf("%d", &N2);

    printf("Digite o Valor de N3: ");
    scanf("%d", &N3);

    printf("Digite o Valor de N4: ");
    scanf("%d", &N4);

    MD = (N1 + N2 + N3 + N4) / 4;

    if(MD>=7){
        printf("Aluno Aprovado: %d", MD);
    } else {
        
        printf("Digite o Valor de EX: ");
        scanf("%d", &EX);

        novaMD = (MD + EX) / 2;

        if(novaMD>=5){
            printf("Aluno Aprovado em Exame: %d", novaMD);
        } else {
            printf("Aluno Reprovado: %d", novaMD);
        }

    }

    return 0;
}