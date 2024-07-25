/******************************************************************************

Escreva um programa em C que faça a leitura de dois valores inteiros e imprima
todos os números do intervalo fechado entre esses dois números (incluindo os
próprios números lidos) em ordem crescente. Atenção: o programa pode permitir
que seja digitado primeiro o maior ou o menor valor e fazer a correção quando
necessário. Exemplo: se foram digitados os números 2 e 5 (ou 5 e 2), o programa irá
imprimir “2 3 4 5”.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;
    int inicio, fim;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }

    printf("Números no intervalo entre %d e %d:\n", inicio, fim);
    int i = inicio;
    while (i <= fim) {
        printf("%d ", i);
        i++;
    }

    return 0;
}


