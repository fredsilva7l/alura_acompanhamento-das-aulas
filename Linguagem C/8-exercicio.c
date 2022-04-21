#include <stdio.h>

int main() {
    int fatorial = 0, resultado = 1;

    printf("Escreva qual numero quer calcular o fatorial \n", fatorial);
    scanf("%d", & fatorial);
    
    for (int i = 1; i < fatorial; i++) resultado += resultado * i;
    printf("O valor do fatorial de %d e igual a %d", fatorial, resultado);

    return 0;
}