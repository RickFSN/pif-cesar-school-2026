#include <stdio.h>
#include <stdlib.h>

int main() {
    int saque;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque em R$: ");
    scanf("%d", &saque);

    while (saque >= 100) { saque -= 100; c100++; }
    while (saque >= 50)  { saque -= 50;  c50++;  }
    while (saque >= 20)  { saque -= 20;  c20++;  }
    while (saque >= 10)  { saque -= 10;  c10++;  }
    while (saque >= 5)   { saque -= 5;   c5++;   }
    while (saque >= 2)   { saque -= 2;   c2++;   }

    if (saque > 0) {
        printf("Aviso: Nao e possivel entregar R$ %d com as notas disponiveis.\n", saque);
    } else {
        printf("--- Cedulas Entregues ---\n");
        if (c100 > 0) printf("R$ 100: %d\n", c100);
        if (c50 > 0)  printf("R$ 50: %d\n", c50);
        if (c20 > 0)  printf("R$ 20: %d\n", c20);
        if (c10 > 0)  printf("R$ 10: %d\n", c10);
        if (c5 > 0)   printf("R$ 5: %d\n", c5);
        if (c2 > 0)   printf("R$ 2: %d\n", c2);
    }

    system("PAUSE");
    return 0;
}