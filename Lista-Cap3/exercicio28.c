#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("\n=== MENU DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.0) {
                    novo_salario = salario + (salario * 0.15); // 15%
                } else {
                    novo_salario = salario + (salario * 0.10); // 10%
                }
                printf("O novo salario com reajuste e: R$ %.2f\n", novo_salario);
                break;
            
            case 2:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.0) {
                    desconto = salario * 0.08; // 8%
                } else {
                    desconto = salario * 0.15; // 15%
                }
                printf("O valor descontado de Imposto de Renda e: R$ %.2f\n", desconto);
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}