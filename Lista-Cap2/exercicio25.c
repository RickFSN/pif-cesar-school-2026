#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario_base, salario_liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salario_base);

    // Formula matemática: Salário Base + Gratificação (5%) - Imposto (7%)
    // Como ambos incidem sobre a base, +0.05 - 0.07 resulta em -0.02.
    // Assim, o salário líquido equivale a 98% do salário base original (0.98).
    salario_liquido = salario_base + (salario_base * 0.05f) - (salario_base * 0.07f);

    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}