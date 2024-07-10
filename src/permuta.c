#include <stdio.h>

int main()
{
    int x,y,troca;
    
    printf("Digite o primeiro numero da permuta: ");
    scanf("%d", &x);
    printf("Digite o segundo numero da permuta: ");
    scanf("%d", &y);
    
    printf("Numeros digitados: %d e %d em ordem", x,y);
    
    troca = x;
    x = y;
    y = troca;
    
    printf("\nNumeros permutados: %d e %d posicao trocada", x,y);

    return 0;
}
