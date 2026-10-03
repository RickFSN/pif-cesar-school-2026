#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    printf("Digite o cateto A: ");
    scanf("%f", &lado_a);
    printf("Digite o cateto B: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Comprimento da hipotenusa: %.4f\n", hipotenusa);

    system("PAUSE");
    return 0;
}