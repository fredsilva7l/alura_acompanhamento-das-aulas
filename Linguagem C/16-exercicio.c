#include <stdio.h>

int XelevadoY(int, int);
void imprime(int, int, int);

int main() {
    int valorDaBase = 0, valorDoExpoente = 0;

    while (1) {

        if (valorDaBase == 0 || valorDoExpoente <= 0) {
            printf("Escreva o valor da base X e do expoente Y(positivo) para saber o resultado! \n");
            scanf("%d %d", & valorDaBase, & valorDoExpoente);
        } else break;
    }
    if (valorDoExpoente == 1) printf("O valor da potencia e: %d", valorDaBase);
    else XelevadoY(valorDaBase, valorDoExpoente);

    return 0;
}

int XelevadoY(int valorDaBase, int valorDoExpoente) {
    int XelevadoY = 0, armazenaValorPotenciacao = valorDaBase * valorDaBase;

    for (int i = 2; i < valorDoExpoente; i++) armazenaValorPotenciacao = armazenaValorPotenciacao * valorDaBase;

    imprime(valorDaBase, valorDoExpoente, armazenaValorPotenciacao);
    return 0;
}

void imprime(int valorDaBase, int valorDoExpoente, int armazenaValorPotenciacao) {
    printf("O valor da potencia e: %d \n", armazenaValorPotenciacao);
}