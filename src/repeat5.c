/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int palpite, correto;
    int numeroDePalpites = 0;
    const int maxTentativas = 5;

    srand(time(NULL));
    correto = rand() % 100;

    while (numeroDePalpites < maxTentativas) {
        numeroDePalpites++;
        printf("Tentativa %d de %d: Adivinhe o numero: ", numeroDePalpites, maxTentativas);
        scanf("%d", &palpite);

        if (palpite > correto) {
            puts("Palpite alto!");
        } else if (palpite < correto) {
            puts("Palpite foi baixo!");
        } else {
            // Palpite correto
            printf("Você acertou o número!\n");
            printf("Número total de palpites: %d\n", numeroDePalpites);
            return 0;
        }
    }

    printf("Voce nao acertou o numero apos %d tentativas. O numero correto era %d.\n", maxTentativas, correto);
    return 0;
}
