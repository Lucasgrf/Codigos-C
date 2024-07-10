#include <stdio.h>

int main()
{
    float mediaAnual,media1,media2,media3,media4;
    
    printf("Digite a primeira media: ");
    scanf("%f", &media1);
    printf("Digite a segunda media: ");
    scanf("%f", &media2);
    printf("Digite a terceira media: ");
    scanf("%f", &media3);
    printf("Digite a quarta media: ");
    scanf("%f", &media4);
    
    mediaAnual = (1*media1 + 2*media2 + 3*media3 + 4*media4)/(1+2+3+4);
    
    printf("A media ponderada anual: %.2f", mediaAnual);

    return 0;
}
