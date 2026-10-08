#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, soma = 0.0, maior = -1.0, menor = 11.0;
    int total_alunos = 0;

    while (1) {
        printf("Digite a nota do aluno (-1.0 para encerrar): ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            total_alunos++;

            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        } else {
            printf("Nota invalida. Digite valores entre 0.0 e 10.0.\n");
        }
    }

    if (total_alunos > 0) {
        printf("\n--- Estatisticas da Turma ---\n");
        printf("Total de alunos avaliados: %d\n", total_alunos);
        printf("Maior nota da turma: %.2f\n", maior);
        printf("Menor nota da turma: %.2f\n", menor);
        printf("Media geral da turma: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhuma nota valida foi registrada.\n");
    }

    system("PAUSE");
    return 0;
}