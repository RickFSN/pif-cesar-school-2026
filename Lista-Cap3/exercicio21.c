#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char letra_secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("Adivinhe a letra secreta (de 'a' a 'z')!\n");

    do {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < letra_secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        } else if (palpite > letra_secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
        }
    } while (palpite != letra_secreta);

    printf("\nParabens! Acertou a letra '%c' em %d tentativas!\n", letra_secreta, tentativas);

    system("PAUSE");
    return 0;
}