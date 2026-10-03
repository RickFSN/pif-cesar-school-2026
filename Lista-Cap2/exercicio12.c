#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, original;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    original = num;
    // A lógica é: decrementa-se para achar o antecessor, exibe-se, 
    // depois incrementa-se duas vezes para chegar ao sucessor.
    num--; 
    printf("Antecessor de %d: %d\n", original, num);
    
    num++; // Volta ao original
    num++; // Vai para o sucessor
    printf("Sucessor de %d: %d\n", original, num);

    system("PAUSE");
    return 0;
}