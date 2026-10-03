#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf(" %c", &letra);
    // O numero inteiro impresso representa o codigo padrao em 1 byte (decimal) 
    // que o computador usa para identificar graficamente este caractere na tabela ASCII.
    printf("O caractere '%c' possui o codigo ASCII inteiro: %d\n", letra, letra);

    system("PAUSE");
    return 0;
}