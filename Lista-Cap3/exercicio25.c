#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero %d E PRIMO (possui %d divisores).\n", n, divisores);
    } else {
        printf("O numero %d NAO E PRIMO (possui %d divisores).\n", n, divisores);
    }

    system("PAUSE");
    return 0;
}