#include <stdio.h>

int main(){
    int anterior, proximo = 0;
    int atual, l = 1;

    while(l<=15){
        printf("%d", atual);
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
        l++;
    }
}