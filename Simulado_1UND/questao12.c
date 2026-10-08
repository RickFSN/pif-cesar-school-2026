#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota valida (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("Erro: Nota invalida! Tente novamente.\n");
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada com sucesso: %.2f\n", nota);

    system("PAUSE");
    return 0;
}