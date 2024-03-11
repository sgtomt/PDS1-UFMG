#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, f; 

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (1.8 * c + 32);
    printf("%.0f", f);
}