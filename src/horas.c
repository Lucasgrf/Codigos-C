#include <stdio.h>

int main()
{
    float hora,minuto,segundo;
    int num;
    
    printf("Digite a quantidade de segundos para a conversao: ");
    scanf("%d", &num);
    
    hora = (num/60)/60.0;
    minuto = num/60.0;
    segundo = (num*60)*60.0;
    
    printf("Horas: [%.2f horas] [%.1f minutos] [%.1f segundos]", hora,minuto,segundo);

    return 0;
}