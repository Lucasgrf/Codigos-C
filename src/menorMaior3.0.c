/******************************************************************************

2. Escreva um programa em C que leia três inteiros e informe qual deles representa o
maior dos valores.
Passos recomendados:
a. Defina as três variáveis com algum tipo numérico.
b. Faça a leitura das variáveis. Lembre-se de sempre adicionar um prompt
(mensagem) antes da leitura para avisar ao usuário o que ele deve digitar.
c. Implemente um desvio if-else para verificar se a primeira variável lida é
maior do que a segunda e deixe os blocos de instruções das partes
verdadeira e falsa preparados.
d. No desvio verdadeiro do if-else anterior, crie um novo desvio if-else
aninhado para verificar se a primeira variável lida também é maior do
que terceira:
i. Caso a condição seja verdadeira é porque a primeira variável é a
maior de todas;
ii. Senão, a terceira que será;
iii. Implemente esse comportamento.
e. No desvio falso do if-else mais externo, crie um novo desvio if-else
aninhado para verificar se a segunda variável lida também é maior do que
terceira:
i. Caso a condição seja verdadeira é porque a segunda variável é a
maior de todas;
ii. Senão, a terceira que será;
iii. Implemente esse comportamento.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);
    
    if(x > y){
        if(x > z){
            printf("X é o maior valor");
        }else{
            printf("Z eh o maior valor");
        }
    }else{
        if(y > x){
            printf("Y eh o maior valor");
        }else{
            printf("Z eh o maior valor");
        }
    }

    return 0;
}
