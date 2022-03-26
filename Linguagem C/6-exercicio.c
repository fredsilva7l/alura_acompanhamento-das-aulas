#include <stdio.h>

int main() {
    int enesimoTermo = 0;
    float harmonico = 0;
    printf("Escreva qual enesimo termo quer calcular da serie harmonica: \n");
    scanf("%d", & enesimoTermo);

    for (float i = 1; i <= enesimoTermo; i++) harmonico += (1 / i);
    printf("resultado e %f \n", harmonico);

    return 0;
}