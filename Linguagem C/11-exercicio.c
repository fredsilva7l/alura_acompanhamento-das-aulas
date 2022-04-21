#include <stdio.h>

int main() {
    int numero = 0;

    printf("Escreva qual numero quer saber os divisores \n");
    scanf("%d", & numero);
    printf("Os divisores de %d sao: ", numero);

    for (int i = numero; i <= numero; i--)
        if (numero % i == 0) printf("%d ", i);
        
    printf("\n");

    return 0;
}