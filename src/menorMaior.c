#include <stdio.h>

int main()
{
    int x,y;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    
    if(x < y){
        printf("Y é maior que X: Y = %d, X = %d", y,x);
    }
    
    if(x > y){
        printf("X é maior que Y: X = %d, Y =%d", x,y);
    }
    
    if(x == y){
        printf("X é igual a Y: X = %d, Y = %d", x,y);
    }
    

    return 0;
}