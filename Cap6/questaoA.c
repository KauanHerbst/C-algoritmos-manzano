#include <stdio.h>

int main(){
    char nomes[10][20];

    for (int i = 0; i < 10; i++){
        printf("Digite o nome %d: \n", i + 1);
        fgets(nomes[i], 20, stdin);
    }
    
    printf("Nomes inseridos: \n");
    for (int i = 0; i < 10; i++){
        printf("%s \n", nomes[i]);
    }
    

    return 0;
}