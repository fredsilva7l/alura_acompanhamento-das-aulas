#include <stdio.h>

int main() {
    float fatorial = 0, somatorioFatorial = 1, resultado = 0;

    printf("Escreva qual numero quer calcular o fatorial \n", fatorial);
    scanf("%f", & fatorial);

    for (float i = 1; i < fatorial; i++) {
        for (float j = 1; j < i; j++) somatorioFatorial += somatorioFatorial * j;
        resultado += (1 / somatorioFatorial);
        somatorioFatorial = 1;
    }

    printf("O valor da expressao e %f \n", resultado);

    return 0;
}