#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("--- Versao com FOR ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("--- Versao com WHILE ---\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("--- Versao com DO-WHILE ---\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    /* 
    RESPOSTA: A estrutura mais adequada para este caso e o laço 'for'. 
    Como sabemos de antemao o numero exato de iteracoes (de 0 a 100), o 'for' 
    agrupa a inicializacao, a condicao e o incremento numa unica linha, 
    tornando o codigo mais limpo, legivel e menos propenso a erros de esquecimento 
    do incremento.
    */

    system("PAUSE");
    return 0;
}