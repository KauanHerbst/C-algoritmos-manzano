#include <stdio.h>

int main(){
    int resto, l = 0;

    while(l<=200){
        resto = l - 4 * (l / 4);
        if(resto == 0){
            printf("%d", l);
        }
        l++;
    }
}