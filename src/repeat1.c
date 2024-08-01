/******************************************************************************

Escreva um programa que imprima todos os números inteiros de -10 a 10:

a. Com while;
b. Com do-while; e
c. for.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    /** A)
    int i = -10;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    **/
    
    /** B)
    int i = -10;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    **/
    
    // C)
    for (int i = -10; i <= 10; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}