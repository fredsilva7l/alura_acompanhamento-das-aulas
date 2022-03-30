#include <stdio.h>

int main() {
    int termoAnterior = 0, termoPosterior = 1, futuroTermo = 0, enesimoTermo = 0;

    printf("Qual enesimo Termo de fibonasi deseja calcular? \n");
    scanf("%d", & enesimoTermo);

    if (enesimoTermo == 0) printf("O primeiro termo e 0 \n");
    else if (enesimoTermo == 1) printf("O segundo termo e 1 \n");
    else
        for (int i = 2; i < enesimoTermo; i++) {
            futuroTermo = termoAnterior + termoPosterior;
            termoAnterior = termoPosterior;
            termoPosterior = futuroTermo;
        }
    printf("O enesimo termo de fibonasi e %d \n", termoPosterior);

    return 0;
}