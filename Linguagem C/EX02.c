#include <stdio.h>

#include <stdlib.h>

int main() {
  int n;
  printf("Digite um numero: ");
  scanf("%d", & n);
  if (n % 2 == 0) {
    printf("numero par!");
  } else {
    printf("numero impar!");
  }
  return 0;
}