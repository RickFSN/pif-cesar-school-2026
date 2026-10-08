#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    int encontrou = 0;

    printf("Digite o numero limite (NUM): ");
    scanf("%d", &num);

    printf("Multiplos de 3 e 5 ao mesmo tempo ate %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero satisfaz a condicao no intervalo.");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}