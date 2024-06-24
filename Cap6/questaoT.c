#include <stdio.h>

int main() {
    int  cont, x, vetorA[11], vetorB[11], vetorC[23]; 

    x = 0;
    while(x < 12){
        printf("VetorA[%d] = ",x);
        scanf("%d", &cont);
        if(cont % 2 == 0 && cont % 3 == 0){
            vetorA[x] = cont;
            x++;
        } else {
            printf("Esse numero nao e divisivel por 2 e 3");
        }
    }
    x = 0;
    while(x < 12){
        printf("VetorB[%d] = ",x);
        scanf("%d", &cont);
        if(cont % 5 == 0){
            vetorB[x] = cont;
            x++;
        } else {
            printf("Esse numero nao e divisivel por 5");
        }
    }

    for(int x = 0; x < 24; x++){
        if(x < 12){
            vetorC[x] = vetorA[x];
        } else {
            vetorC[x] = vetorB[x-12];
        }
    }

    for(int x = 0; x < 24; x++){
        printf("VetorC[%d] = %d\n", x, vetorC[x]);
    }

    return 0;
}