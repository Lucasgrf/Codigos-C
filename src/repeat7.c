/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int n;
    int primo = 1;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d eh um numero primo.\n", n);
    } else {
        printf("%d nao eh um numero primo.\n", n);
    }

    return 0;
}

