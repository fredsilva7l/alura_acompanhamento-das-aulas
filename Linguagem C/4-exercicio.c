#include <stdio.h>

int main() {
    float faixaSalarial;
    printf("Escreva qual o valor do seu salario, e descubra quanto deve pagar de INSS \n");
    scanf("%f", & faixaSalarial);

    if (faixaSalarial <= 1556.94) printf("O valor que voce deve pagar e %f \n", faixaSalarial * 0.08);
    else if (faixaSalarial <= 2594.92) printf("O valor que voce pagar e %f \n", faixaSalarial * 0.09);
    else printf("O valor que voce deve pagar e %f \n", faixaSalarial * 0.11);

    return 0;
}