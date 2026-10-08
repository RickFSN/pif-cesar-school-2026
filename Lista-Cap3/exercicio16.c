#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha_secreta = 2026;
    int tentativa, i;
    int acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d/3 - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha_secreta) {
            printf("Acesso Concedido! (Resolvido em %d tentativa(s))\n", i);
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta.\n");
        }
    }

    if (acertou == 0) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}