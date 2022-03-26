#include <stdio.h>

int main() {
    int ano;
    printf("Escreva ano que quer verificar \n");
    scanf("%d", & ano);

    if ((ano % 4 == 0 && !(ano % 100 == 0)) || ano % 400 == 0) printf("Ano bissexto");
    else printf("Nao e ano bissexto");

    return 0;
}