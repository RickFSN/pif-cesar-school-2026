#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, multiplo;

    printf("Os 100 primeiros multiplos inteiros e positivos de 3:\n");
    
    for (i = 1; i <= 100; i++) {
        multiplo = i * 3;
        printf("%d\t", multiplo);
        
        // Quebra a linha a cada 10 números impressos
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}