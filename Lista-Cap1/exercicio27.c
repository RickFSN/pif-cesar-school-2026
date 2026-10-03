#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_segundos, horas, minutos, segundos, resto;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    resto = total_segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           total_segundos, horas, minutos, segundos);

    system("PAUSE");
    return 0;
}