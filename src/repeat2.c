/******************************************************************************
Escreva um programa que imprima todos os números inteiros do intervalo [1, 1000]
que terminam com o dígito 4 e são múltiplos de 6.
[Sugestão: Construa um laço de repetição com uma variável de contagem que varia
entre 1 e 1000 e verifique se o valor dessa variável satisfaz as condições através de
um desvio condicional no corpo do laço.] [Dica: O último dígito de um número inteiro
tem o mesmo valor do resto da divisão desse número por 10.]

*******************************************************************************/
#include <stdio.h>

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (i % 10 == 4 && i % 6 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
