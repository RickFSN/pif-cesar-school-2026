#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int ultimo_digito = numero % 10;
        numero_invertido = (numero_invertido * 10) + ultimo_digito;
        numero /= 10;
    }

    printf("Numero com digitos em ordem inversa: %d\n", numero_invertido);

    system("PAUSE");
    return 0;
}