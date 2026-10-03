#include <stdio.h>
#include <stdlib.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra MAIUSCULA: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("Letra convertida para minuscula: %c\n", minuscula);

    system("PAUSE");
    return 0;
}