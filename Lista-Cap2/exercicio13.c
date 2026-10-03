#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado_q, base_r, alt_r, base_t, alt_t;

    printf("--- QUADRADO ---\nLado: ");
    scanf("%f", &lado_q);
    printf("Area do Quadrado: %.2f\n\n", lado_q * lado_q);

    printf("--- RETANGULO ---\nBase e Altura (separadas por espaco): ");
    scanf("%f %f", &base_r, &alt_r);
    printf("Area do Retangulo: %.2f\n\n", base_r * alt_r);

    printf("--- TRIANGULO RETANGULO ---\nBase e Altura (separadas por espaco): ");
    scanf("%f %f", &base_t, &alt_t);
    printf("Area do Triangulo: %.2f\n", (base_t * alt_t) / 2.0f);

    system("PAUSE");
    return 0;
}