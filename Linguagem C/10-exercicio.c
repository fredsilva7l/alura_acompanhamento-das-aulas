#include <stdio.h>

int main() {
    int contador = 0, resultado = 0;
    while (contador <= 100) {
        resultado += contador;
        contador += 2;
    }
    printf("O resultado da soma dos 50 primeiros numeros pares e: %d \n", resultado);

    return 0;
}