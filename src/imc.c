/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso,altura,imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso/(altura*altura);
    
    if(imc <= 18.5){
        printf("Baixo peso!");
    }else if(18.5 < imc && imc <= 25){
        printf("Peso ideal!");
    }else if(25 < imc && imc <= 30){
        printf("Sobrepeso!");
    }else{
        printf("Obesidade!");
    }

    return 0;
}
