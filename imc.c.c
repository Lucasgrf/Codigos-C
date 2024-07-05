#include <stdio.h>

int main()
{
    float peso, altura,imc;
    
    printf("=Calculo de IMC=\n");
    
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    
    printf("\nO IMC para os valores: Peso = %.2f e Altura = %.2f", peso,altura);
    printf("\nIMC = %.2f", imc);
    
    return 0;
}
