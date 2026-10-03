#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0f; // Semi-perímetro
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo (Heron): %.4f\n", area);

    system("PAUSE");
    return 0;
}