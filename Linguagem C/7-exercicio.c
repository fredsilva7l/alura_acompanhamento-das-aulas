#include <stdio.h>

int main() {
    float numerador = 1, denominador = 1, resultado = 0;
    while (numerador < 100) {
        resultado += (numerador / denominador);
        numerador += 2;
        denominador++;
    }
    printf("O resultado e: %f \n", resultado);

    return 0;
}