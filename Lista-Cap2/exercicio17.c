#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main() {
    float raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    circunferencia = 2.0f * PI * raio;

    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    system("PAUSE");
    return 0;
}