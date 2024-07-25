/******************************************************************************

Escreva um programa que leia uma quantidade indefinida de valores inteiros da
entrada até que seja digitado o valor zero. Antes de encerrar o programa deve
informar quais foram o menor e o maior valor digitado, sem contar o zero.

*******************************************************************************/
#include <stdio.h>

int main() {
    int valor;
    int menor = 0;
    int maior = 0;
    int primeiroValor = 1; // variavel usada como tipo boolean

    printf("Digite valores inteiros (digite 0 para terminar):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        if (primeiroValor) {
            menor = valor;
            maior = valor;
            primeiroValor = 0;
        } else {
            if (valor < menor) {
                menor = valor;
            }
            if (valor > maior) {
                maior = valor;
            }
        }
    }

    if (primeiroValor) {
        printf("Nenhum valor foi inserido.\n");
    } else {
        printf("O menor valor inserido foi: %d\n", menor);
        printf("O maior valor inserido foi: %d\n", maior);
    }

    return 0;
}


