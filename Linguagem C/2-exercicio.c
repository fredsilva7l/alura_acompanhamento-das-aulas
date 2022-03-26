#include <stdio.h>

int main() {
    int numero;
    printf("Escreva um numero inteiro \n");
    scanf("%d", & numero);

    if (numero > 0) printf("Numero positivo! \n");
    else if (numero < 0) printf("Numero negativo! \n");
    else printf("Numero nulo! \n");

    return 0;
}