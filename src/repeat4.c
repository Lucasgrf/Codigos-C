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

    srand(time(NULL));
    correto = rand() % 100;

    palpite = -1;
    while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        numeroDePalpites++;

        if (palpite > correto) {
            puts("Palpite alto!");
        } else if (palpite < correto) {
            puts("Palpite foi baixo!");
        }
    }

    puts("Voce acertou!");
    printf("Numero total de palpites: %d\n", numeroDePalpites);
    return 0;
}
