#include <stdio.h>

int main(){
    float c, f;
    c = 10;

    while(c<=100){
        f = (9 * c + 160) / 5;
        printf("Celcius: %f, Fahrenheit: %f", c, f);
        c += 10;
    }
}