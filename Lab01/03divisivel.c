#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, z, restoxy, restoxz;

    printf("Digite o valor de [x]: ");
    scanf("%d", &x);

    printf("Digite o valor de [y]: ");
    scanf("%d", &y);

    printf("Digite o valor de [z]: ");
    scanf("%d", &z);

    restoxy = x%y;
    restoxz = x%z;

    if(restoxy==0 && restoxz==0){
        printf("O número é divisível");
    } else printf("Não é divisível");
}