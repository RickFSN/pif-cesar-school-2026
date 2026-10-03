#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    double media;

    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (double)(n1 + n2 + n3) / 3.0;

    printf("A media aritmetica simples eh: %.2lf\n", media);

    system("PAUSE");
    return 0;
}