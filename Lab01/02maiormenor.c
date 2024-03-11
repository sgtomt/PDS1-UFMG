#include <stdio.h>
#include<stdlib.h>

int main (){
    int a, b, c, maiorNum;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a>b && a>c){
        maiorNum = a;
    } else if (b>c){
        maiorNum = b;
    } else maiorNum = c;

    printf("%d", maiorNum);
}