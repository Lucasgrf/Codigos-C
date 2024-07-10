#include <stdio.h>

int main()
{
    int base,altura;
    float area;
    
    printf("Digite a base do triangulo: ");
    scanf("%d", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);
    
    area = (base*altura)*1.0/2;
    
    printf("A area do triangulo eh = %.2f", area);
    
    return 0;
}