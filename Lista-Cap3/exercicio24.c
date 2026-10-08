#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j;

    printf("Digite uma dimensao impar N (entre 3 e 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensao invalida.\n");
    } else {
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= N; j++) {
                if (i == j || i + j == N + 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}