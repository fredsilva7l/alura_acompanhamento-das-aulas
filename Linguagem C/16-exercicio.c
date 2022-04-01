#include <stdio.h>

int XelevadoY(int, int);
void imprime(int, int, int);


int main()
{
    int valorDaBase = 0, valorDoExpoente = 0;

    while (1)
    {
        
        if ( valorDaBase == 0 & valorDoExpoente <= 0) {
            printf("Escreva o valor da base X e do expoente Y(positivo) para saber o resultado! \n");
            scanf("%d %d", & valorDaBase , & valorDoExpoente);
        }
            XelevadoY(valorDaBase, valorDoExpoente);
            imprime(valorDaBase, valorDoExpoente, XelevadoY);
            break;
    }
    return 0;
}

int XelevadoY(int valorDaBase, int valorDoExpoente){
    int XelevadoY = 0, armazenaValorPotenciacao = 0;
    for(int i = 0; i < valorDoExpoente; i++) armazenaValorPotenciacao = valorDaBase * valorDaBase;
    printf("valor de X^Y e: %d \n", XelevadoY);
    XelevadoY = armazenaValorPotenciacao;
    return XelevadoY;
}

void imprime(int valorDaBase, int valorDoExpoente, int XelevadoY){
    printf("O valor da potenciacai e: %d \n", XelevadoY);
}