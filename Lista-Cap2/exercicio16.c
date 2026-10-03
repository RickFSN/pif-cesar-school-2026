#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int qtd_degraus;

    printf("Altura do degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    printf("Altura total desejada (em metros): ");
    scanf("%f", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0f;
    
    qtd_degraus = ceil(altura_total_cm / altura_degrau_cm);

    printf("Serao necessarios no minimo %d degrau(s).\n", qtd_degraus);

    system("PAUSE");
    return 0;
}