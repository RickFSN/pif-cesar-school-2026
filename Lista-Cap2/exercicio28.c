#include <stdio.h>
#include <stdlib.h>

int main() {
    float horas_normais, horas_extras, salario_bruto_anual, imposto, salario_final;

    printf("Total de horas normais no ano: ");
    scanf("%f", &horas_normais);
    printf("Total de horas extras no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto_anual = (horas_normais * 10.0f) + (horas_extras * 15.0f);

    imposto = (salario_bruto_anual > 12000.0f) ? ((salario_bruto_anual - 12000.0f) * 0.10f) : 0.0f;
    
    salario_final = salario_bruto_anual - imposto;

    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto_anual);
    printf("Imposto Retido: R$ %.2f\n", imposto);
    printf("Salario Liquido Final: R$ %.2f\n", salario_final);

    system("PAUSE");
    return 0;
}