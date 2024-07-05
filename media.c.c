#include <stdio.h>

int main(void){
    
    float nota1,nota2,nota3,media;
    
    //printf("Digite as tres notas para o calculo da media: "); Jeito que eu fiz.
    //scanf("%f %f %f", &nota1,&nota2,&nota3);
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    
    printf("\nSua media eh: %.2f", media);
    

    return 0;
}