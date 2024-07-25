/******************************************************************************

Escreva um programa em C que imprima os números inteiros de 10 à 1.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10;
    
    while(a >= 0){
        printf("%d ",a);
        a--;
    }

    return 0;
}