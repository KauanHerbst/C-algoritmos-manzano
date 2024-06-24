#include <stdio.h>

int main(){
    int grao = 0;
    int l, quadro = 1;

    while(l<=64){
        grao += quadro;
        quadro *= 2;
        l++;
    }

    printf("%d", grao);
}
