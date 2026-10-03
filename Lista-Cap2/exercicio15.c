#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4;
    float media_simples, media_ponderada;

    printf("Digite as 4 notas (separadas por espaco): ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0f;
    media_ponderada = ( (n1 * 1.0f) + (n2 * 1.0f) + (n3 * 2.0f) + (n4 * 2.0f) ) / 6.0f;

    printf("Media Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    system("PAUSE");
    return 0;
}