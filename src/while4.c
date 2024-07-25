/******************************************************************************

Escreva um programa que calcule e exiba a média de um conjunto de valores inteiros
lidos da entrada. O tamanho do conjunto de valores é indefinido e o programa deve
terminar de ler novos valores apenas quando o valor zero for lido.

*******************************************************************************/
#include <stdio.h>

int main() {
    int valor, soma = 0, contador = 0;
    float media;

    printf("Digite valores inteiros (digite 0 para sair):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        soma += valor;
        contador++;
    }

    if (contador == 0) {
        printf("Nenhum valor foi inserido.\n");
    } else {
        media = soma*1.0 / contador;
        printf("A media dos valores inseridos eh: %.2f\n", media);
    }

    return 0;
}

