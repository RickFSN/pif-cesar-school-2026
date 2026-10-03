#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;
    float salario_bruto, salario_liquido;

    printf("Numero de dias uteis trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 30.0f;
    salario_liquido = salario_bruto - (salario_bruto * 0.08f); 

    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Salario Liquido (pos 8%% IR): R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}