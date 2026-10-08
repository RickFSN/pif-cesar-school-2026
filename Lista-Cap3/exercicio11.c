#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, i;

    printf("Digite o valor de A e B (separados por espaco): ");
    scanf("%d %d", &A, &B);

    if (A <= B) {
        // Ordem crescente
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        // Ordem decrescente
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}