#include <stdio.h>

#include <stdlib.h>

int main() {
  int numero, i;
  printf("Digite a opcao\n1 - n = (++i) +i *(i+1)\n2 - n = (i++) +i *(i+1)\n3 - n = 1*(i+1) + (++i)\n4 - n = 1*(i+1) + (i++)\n", n);
  scanf("%d", & n);

  if (numero == 1) {
    printf("O valor e:", numero = (++i) + i * (i + 1));
  }
  if (numero == 2) {
    printf("O valor e:", numero = (i++) + i * (i + 1));
  }
  if (numero == 3) {
    printf("O valor e:", numero = 1 * (i + 1) + (++i));
  }
  if (numero == 4) {
    printf("O valor e:", numero = (++i) + i * (i + 1));
  }
  if (numero > 4) {
    printf("Valor invalido:", numero = 1 * (i + 1) + (i++));
  }
  return 0;
}