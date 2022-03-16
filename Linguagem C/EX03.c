#include <stdio.h>

#include <stdlib.h>

int main() {
  int n, i;
  printf("Digite a opcao\n1 - n = (++i) +i *(i+1)\n2 - n = (i++) +i *(i+1)\n3 - n = 1*(i+1) + (++i)\n4 - n = 1*(i+1) + (i++)\n", n);
  scanf("%d", & n);

  if (n == 1) {
    printf("O valor e:", n = (++i) + i * (i + 1));
  }
  if (n == 2) {
    printf("O valor e:", n = (i++) + i * (i + 1));
  }
  if (n == 3) {
    printf("O valor e:", n = 1 * (i + 1) + (++i));
  }
  if (n == 4) {
    printf("O valor e:", n = (++i) + i * (i + 1));
  }
  if (n > 4) {
    printf("Valor invalido:", n = 1 * (i + 1) + (i++));
  }
  return 0;
}