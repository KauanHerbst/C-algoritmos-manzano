#include <stdio.h>

int main() {
    char sexo;
    char nome[20];
    
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);  
    
    printf("Digite o nome: ");
    scanf("%s", nome);

    if (sexo == 'M' || sexo == 'F') {
        if (sexo == 'M') {
            printf("llmo Sr. %s", nome);
        } else {
            printf("llma Sra. %s", nome);
        }
    } else {
        printf("Sexo inválido");
    }

    return 0;
}