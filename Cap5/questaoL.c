#include <stdio.h>

int main(){
    int j, n, f;
    int s = 0;
    int l = 1;

    while(l<=15){
        printf("Digite um numero: ");
        scanf("%d", &n);
        f, j = 1;
        while(j <=n){
            f *= j;
            j++;
        }
        s += f;
        l++;
    }
}
