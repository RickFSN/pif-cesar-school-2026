#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo da sequencia de Fibonacci (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O termo N deve ser positivo.\n");
    } else {
        printf("Termos da sequencia ate N = %d:\n", n);
        for (i = 1; i <= n; i++) {
            if (i == 1) {
                printf("1 ");
            } else if (i == 2) {
                printf("1 ");
            } else {
                proximo = anterior + atual;
                printf("%lld ", proximo);
                anterior = atual;
                atual = proximo;
            }
        }
        
        printf("\n\nO %d-esimo termo e: ", n);
        if (n == 1 || n == 2) {
            printf("1\n");
        } else {
            printf("%lld\n", atual);
        }
    }

    system("PAUSE");
    return 0;
}