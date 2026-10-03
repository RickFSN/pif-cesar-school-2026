#include <stdio.h>
#include <stdlib.h>

int main() {
    float comprimento, largura, preco_metro, perimetro, total_arame, custo;

    printf("Comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Preco do metro do arame (R$): ");
    scanf("%f", &preco_metro);

    perimetro = (comprimento * 2.0f) + (largura * 2.0f);
    total_arame = perimetro * 3.0f; // 3 fios
    custo = total_arame * preco_metro;

    printf("Metros de arame farpado necessarios: %.2f m\n", total_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo);

    system("PAUSE");
    return 0;
}