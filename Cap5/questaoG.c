#include <stdio.h>

int main(){
    int l = 0;
    int p = 1;

    while(l<=15){
        printf("%d", p);
        p *= 3;
        l++;
    }
}