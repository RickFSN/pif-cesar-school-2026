#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, i, j;

    printf("Digite o tamanho do lado do quadrado (L entre 3 e 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Tamanho invalido.\n");
    } else {
        for (i = 1; i <= L; i++) {
            for (j = 1; j <= L; j++) {
                if (i == 1 || i == L || j == 1 || j == L) {
                    printf("X");
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