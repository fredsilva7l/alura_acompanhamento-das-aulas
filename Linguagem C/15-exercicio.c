#include <stdio.h>

int main() {
    int numero = 0, maiorNumero = 0;

    while (1) {
        if (numero > maiorNumero) maiorNumero = numero;
        printf("escreva um numero inteiro \n");
        scanf("%d", & numero);
        if (numero < 0) break;
    }

    printf("O maior numero e %d \n", maiorNumero);
    printf("O menor numero e %d \n", numero);

    return 0;
}