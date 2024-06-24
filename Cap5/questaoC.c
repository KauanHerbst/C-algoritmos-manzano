#include <stdio.h>

int main(){
    int s = 0;
    int l = 1;

    while(l<=100){
        s += l;
        l++;
    }

    printf("%d", s);
}