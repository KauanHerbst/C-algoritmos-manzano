#include <stdio.h>

int main(){
    int resto, l = 0;

    while(l<=20){
        resto = l - 2 * (l / 2);
        if(resto != 0){
            printf("%d", l);
        }
        l++;
    }
}