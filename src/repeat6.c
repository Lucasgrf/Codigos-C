/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    char tipo;
    double t1, r;
    int n;
    double soma = 0.0;

    printf("Digite 'a' para Progressao Aritmetica (PA) ou 'g' para Progressao Geometrica (PG): ");
    scanf(" %c", &tipo);

    printf("Digite o primeiro termo da progressão: ");
    scanf("%lf", &t1);
    printf("Digite a razão da progressão: ");
    scanf("%lf", &r);
    printf("Digite o número de termos: ");
    scanf("%d", &n);

    if (tipo == 'a') {
        printf("Progressao Aritmetica:\n");
        for (int i = 0; i < n; i++) {
            double termo = t1 + i * r;
            printf("%.2f ", termo);
            soma += termo;
        }
    } else if (tipo == 'g') {
        printf("Progressao Geometrica:\n");
        for (int i = 0; i < n; i++) {
            double termo = t1 * pow(r, i);
            printf("%.2f ", termo);
            soma += termo;
        }
    } else {
        printf("Tipo de progressao invalido!\n");
        return 1;
    }

    printf("\nSoma dos elementos: %.2f\n", soma);

    return 0;
}
