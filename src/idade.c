/******************************************************************************

3. Escreva um programa em C que leia uma idade e imprima se essa pessoa é “Jovem”,
“Adulta” ou “Idosa”.
Passos recomendados:
a. Defina a variável idade como int.
b. Faça a leitura da idade do usuário.
c. Implemente os ifs para exibir a classificação do usuário.
i. Tenha bastante atenção em como construir as condições, elas
provavelmente vão precisar de operadores lógicos.
ii. Por exemplo, como construir corretamente que a idade está no
intervalo de 21 a 60 anos?

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade < 18){
        printf("Uma pessoa jovem!");
    }else if(idade >= 18 && idade <= 50){
        printf("Uma pessoa Adulta");
    }else{
        printf("Uma pessoa idosa!");
    }

    return 0;
}