#include <stdio.h>
#include <stdlib.h>

int main() {
    float kmh, ms;

    printf("Velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6f;

    printf("Velocidade convertida: %.2f m/s\n", ms);

    system("PAUSE");
    return 0;
}
