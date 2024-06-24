#include <stdio.h>
#include <math.h>

int main(){
    int num = 15;
    int quad;

    while(num<=200){
        quad = pow(num, 2);
        printf("quadrado: %d", quad);
        num++;
    }
}