#include <stdio.h>

int main()
{
    float diam,raio,circ,area;
    
    printf("Digite o diametro: ");
    scanf("%f", &diam);
    
    raio = diam/2;
    
    area = 3.14 * (raio*raio);
    
    circ = 2 * 3.14 * raio;
    
    printf("Valores: Raio = %.2f, Area = %.2f, Circunferencia = %.2f", raio, area,circ);

    return 0;
}
