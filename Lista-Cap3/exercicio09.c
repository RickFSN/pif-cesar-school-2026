#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, soma = 0;
    int contador = 0;

    while (1) {
        printf("Digite um valor real positivo (negativo para parar): ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; // O valor negativo serve como sentinela de parada
        }

        soma += valor;
        contador++;
    }

    if (contador > 0) {
        printf("Quantidade de valores validos: %d\n", contador);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / contador);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    system("PAUSE");
    return 0;
}