#include <stdio.h>

int adicao(float numeroA, float numeroB);
int subtracao(float numeroA, float numeroB);
int multiplicacao(float numeroA, float numeroB);
int divisao(float numeroA, float numeroB);

int main() {
    float numeroA = 0, numeroB = 0;

    printf("Escreva dois numeros e descubra o valor das suas operacoes aritmeticas! \n");
    scanf("%f %f", & numeroA, & numeroB);

    adicao(numeroA, numeroB);
    subtracao(numeroA, numeroB);
    multiplicacao(numeroA, numeroB);
    divisao(numeroA, numeroB);

    return 0;
}

int adicao(float numeroA, float numeroB) {
    printf("O valor da soma e %f \n", numeroA + numeroB);
}
int subtracao(float numeroA, float numeroB) {
    printf("O valor da subtracao e %f \n", numeroA - numeroB);
}
int multiplicacao(float numeroA, float numeroB) {
    printf("O valor da multiplicacao e %f \n", numeroA * numeroB);
}
int divisao(float numeroA, float numeroB) {
    if (numeroB == 0) printf("O numero nao pode ser dividido por zero \n");
    else printf("O valor da divisao e %f \n", numeroA / numeroB);
}