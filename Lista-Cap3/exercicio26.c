#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, i, j, divisores;
    long long int soma_primos = 0;

    printf("Digite os valores A e B (positivos, com A < B): ");
    scanf("%d %d", &A, &B);

    printf("Numeros primos entre %d e %d:\n", A, B);

    for (i = A; i <= B; i++) {
        if (i < 2) continue; // 0 e 1 não são primos

        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("\nSoma total dos primos encontrados: %lld\n", soma_primos);

    system("PAUSE");
    return 0;
}