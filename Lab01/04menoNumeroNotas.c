#include <stdio.h>
#include <stdlib.h>

int main(){

    int cem, cinquenta, vinte, dez, cinco, dois, um;
    cem=cinquenta=vinte=dez=cinco=dois=um=0;

    int valorTotal;

    printf("Qual o valor de entrada?: ");
    scanf("%d", &valorTotal);

    for(int i=0; valorTotal>=100; i++){
        valorTotal-=100;
        cem++;
    }

    for(int i=0; valorTotal>=50; i++){
        valorTotal-=50;
        cinquenta++;
    }

     for(int i=0; valorTotal>=20; i++){
        valorTotal-=20;
        vinte++;
    }

    for(int i=0; valorTotal>=10; i++){
        valorTotal-=10;
        cinquenta++;
    }

    for(int i=0; valorTotal>=5; i++){
        valorTotal-=5;
        cinco++;
    }

    for(int i=0; valorTotal>=2; i++){
        valorTotal-=2;
        dois++;
    }
 
     for(int i=0; valorTotal>=1; i++){
        valorTotal-=1;
        um++;
    }

    printf("100: %d\n 50: %d\n 20: %d\n 10: %d\n 5: %d\n 2: %d\n 1: %d\n", cem, cinquenta, vinte, dez, cinco, dois, um);

}