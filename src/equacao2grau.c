#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,delta;
    float x1,x2;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    if(a != 0){
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        printf("Digite o valor de c: ");
        scanf("%d", &c);
        
        delta = (b*b) - 4*a*c;
        if(delta >= 0){
            x1 = ((-b) + sqrt(delta))/2.0*a; //sqrt da biblioteca math.h faz a raiz quadrada do numero passado como parametro.
            x2 = ((-b) - sqrt(delta))/2.0*a;
            
            printf("Raizes: X1 = %.2f e X2 = %.2f", x1,x2);
        }else{
            printf("Nao existe raizes reais para essa equacao!");
            return 2;
        }
        
    }else{
        printf("'a' tem que ser diferente de 0.");
        return 1;
    }

    return 0;
}