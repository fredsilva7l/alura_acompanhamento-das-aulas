#include <stdio.h>

#include <stdlib.h>

int main() {
    int n, i = 3;
    n = (++i) + i * (i + 1);
    printf("o valor de n e: %d\n", n);
    return 0;
}