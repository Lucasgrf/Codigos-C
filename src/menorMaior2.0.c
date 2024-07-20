/**
 * 1. Escreva um programa em C que leia dois números como entrada e exiba o valor do
menor deles ou se eles são iguais.
Passos recomendados:
a. Defina as duas variáveis com algum tipo numérico.
b. Faça a leitura das variáveis. Lembre-se de sempre adicionar um prompt
(mensagem) antes da leitura para avisar ao usuário o que ele deve digitar.
c. Implemente o desvio if-else:
i. Crie uma condição que compara as duas variáveis para saber se
elas são iguais.
1. Adicione no desvio verdadeiro do if a instrução que exibe
a mensagem de que são iguais.
2. Deixe o bloco de instruções da parte else preparado.
ii. Crie um novo desvio if-else aninhado à parte else do if anterior
para verificar qual das duas varáveis é maior.
1. Adicione uma instrução de saída em cada parte do desvio
if-else aninhado.
2. Verifique a indentação.
 *
 */
 
#include <stdio.h>

int main()
{
    int x,y;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    if(x == y){
        printf("X é igual a Y: \nX = %d e Y = %d", x,y);
    }else{
        printf("X e Y não é igual: \nX = %d e Y = %d", x,y);
    }
    
    return 0;
}
