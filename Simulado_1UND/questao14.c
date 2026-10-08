#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha_secreta = 2026;
    int tentativa, i;
    int acesso_concedido = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d/3 - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha_secreta) {
            printf("Acesso Concedido!\n");
            acesso_concedido = 1;
            break;
        } else {
            printf("Senha incorreta.\n");
        }
    }

    if (!acesso_concedido) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}