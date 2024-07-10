#include <stdio.h>

int main()
{
    int num,cem,cinquenta,vinte,dez,cinco,dois,um;
    
    printf("Qual o valor para a verificao: ");
    scanf("%i", &num);
    
    cem = num/100;
    cinquenta = (num%100)/50;
    vinte = (num%50)/20;
    dez = (num%20)/10;
    cinco = (num%10)/5;
    dois = (num%5)/2;
    um = (num%2)/1;
    
    printf("Quantidade de notas de 100: %d", cem);
    printf("\nQuantidade de notas de 50: %d", cinquenta);
    printf("\nQuantidade de notas de 20: %d", vinte);
    printf("\nQuantidade de notas de 10: %d", dez);
    printf("\nQuantidade de notas de 5: %d", cinco);
    printf("\nQuantidade de notas de 2: %d", dois);
    printf("\nQuantidade de notas de 1: %d", um);
    

    return 0;
}