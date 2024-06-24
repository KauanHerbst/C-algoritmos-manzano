#include <stdio.h>

int main() {
   int  cont, x, vetorA[5], vetorB[5], vetorC[11]; 

    x = 0;
    while(x < 6){
        scanf("%d", &cont);
        if(cont & 1 == 1){
            vetorA[x] = cont;
            x++;
        } else {
            printf("Esse numero nao e impar");
        }
    }
    x = 0;
    while(x < 6){
        scanf("%d", &cont);
        if(cont % 2 == 0){
            vetorB[x] = cont;
            x++;
        } else {
            printf("Esse numero nao e par");
        }
    }

    for(int x = 0; x < 11; x++){
        if(x < 6){
            vetorC[x] = vetorA[x];
        } else {
            vetorC[x] = vetorB[x-6];
        }
    }

    for(int x = 0; x < 11; x++){
        printf("VetorC[%d] = %d\n", x, vetorC[x]);
    }

    return 0;
}