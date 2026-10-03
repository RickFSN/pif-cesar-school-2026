#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main() {
    float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0f);

    printf("Valor em radianos: %.6f\n", radianos);

    system("PAUSE");
    return 0;
}