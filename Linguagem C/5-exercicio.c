#include <stdio.h>

int main() {
    int numero;
    printf("Escreva um numero para saber se ele e divisivel por 5\n");
    scanf("%d", & numero);

    if (numero % 5 == 0) printf("O numero e divisivel por 5");
    else printf("O numero nao e divisivel por 5");

    return 0;
}