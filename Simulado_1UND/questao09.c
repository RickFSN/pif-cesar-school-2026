#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nSemiperimetro (p): %.2f\n", p);
    printf("Area do triangulo: %.4f\n", area);

    system("PAUSE");
    return 0;
}