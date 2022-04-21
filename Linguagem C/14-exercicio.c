#include <stdio.h>

void adicao(float numeroA, float numeroB);
void subtracao(float numeroA, float numeroB);
void multiplicacao(float numeroA, float numeroB);
void divisao(float numeroA, float numeroB);

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

void adicao(float numeroA, float numeroB) {
    printf("O valor da soma e %f \n", numeroA + numeroB);
}
void subtracao(float numeroA, float numeroB) {
    printf("O valor da subtracao e %f \n", numeroA - numeroB);
}
void multiplicacao(float numeroA, float numeroB) {
    printf("O valor da multiplicacao e %f \n", numeroA * numeroB);
}
void divisao(float numeroA, float numeroB) {
    if (numeroB == 0) printf("O numero nao pode ser dividido por zero \n");
    else printf("O valor da divisao e %f \n", numeroA / numeroB);
}