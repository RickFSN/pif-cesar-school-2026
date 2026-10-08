#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    long long int soma_quadrados = 0;

    for (i = 1; i <= 100; i++) {
        int quadrado = i * i;
        printf("%d -> %d\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("--------------------------------\n");
    printf("Soma total dos quadrados: %lld\n", soma_quadrados);

    system("PAUSE");
    return 0;
}