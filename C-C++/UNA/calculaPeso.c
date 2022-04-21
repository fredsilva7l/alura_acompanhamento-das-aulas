#include <stdio.h>

int main() {
    float altura = 0, pesoIdeal = 0;
    char sexo = "H";

    printf("Digite qual altura da pessoa: \n");
    scanf("%f", & altura);

    printf("Qual e o genero? H = Homem e M = Mulher \n");
    scanf("%c", & sexo);

    if (sexo == "H") pesoIdeal = (72.7 * altura) - 58;
    else if (sexo == "M") pesoIdeal = (62.1 * altura) - 44.7;
    else printf("Voce digitou as informacoes erradas \n");

    printf("O peso ideal e: %f \n", pesoIdeal);

    return 0;
}