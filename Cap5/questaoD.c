#include <stdio.h>

int main(){
    int s, resto = 0;
    int l = 1;

    while(l<=500){
        resto = l - 2 * (l / 2);
        if(resto == 0){
            s += l;
        }
        l++;
    }

    printf("%d", s);
}