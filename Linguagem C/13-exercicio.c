#include <stdio.h>

int main() {
    int numerador = 0, denominador = 0;

    printf("Escreva dois valores, x e y, e descubra se x e divisivel por y \n");
    scanf("%d %d", & numerador, & denominador);

    if (numerador % denominador == 0) {
        printf("x e divisivel por y \n");
        return 1;
    } else {
        printf("x nao e divisivel por y \n");
        return 0;
    }
}