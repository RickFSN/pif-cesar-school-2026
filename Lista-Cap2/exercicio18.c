#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141593

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4.0f * PI * pow(raio, 2);
    volume = (4.0f / 3.0f) * PI * pow(raio, 3);

    printf("Area da superficie: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);

    system("PAUSE");
    return 0;
}
