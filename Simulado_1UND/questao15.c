#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, contador = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}