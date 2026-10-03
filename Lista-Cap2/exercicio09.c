#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    // Para evitar matematicamente a divisão por zero neste capítulo (sem usar if/else),
    // o programador deve assumir ou solicitar que b seja diferente de zero.
    // Em C, a divisão por 0 resulta num comportamento indefinido (crash).
    float divisao = (float)a / (float)b;
    printf("Divisao real: %.2f\n", divisao);

    system("PAUSE");
    return 0;
}