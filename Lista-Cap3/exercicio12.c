#include <stdio.h>
#include <stdlib.h>

int main() {
    int celsius;
    float fahrenheit, kelvin;

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("----------------------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;
        
        printf("%d C\t\t%.2f F\t\t%.2f K\n", celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}