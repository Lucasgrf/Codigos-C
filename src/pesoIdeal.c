#include <stdio.h>
#include <stdbool.h>

int main()
{
    char sexo;
    float altura,peso;
    
    
    printf("Digite seu sexo: (h/m)\n");
    scanf("%c", &sexo);
        
    if(sexo != 'h' && sexo != 'm'){
            printf("Esse tipo de sexo não existe, tente novamente.\n");
    }else{
        printf("Digite sua altura: ");
        scanf("%f", &altura);
            
        if(sexo == 'h'){
            peso = (72.7*altura) - 58;
        }
    
        if(sexo == 'm'){
            peso = (62.1*altura) - 44.7;
        }
        
        printf("O seu peso ideal: %.2f", peso);
    }
    

    return 0;
    
    
}
