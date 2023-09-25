#include <stdio.h>

int main() {
    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0.0;

    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media_ponderada;
        media_geral += media_ponderada;

        printf("Média do aluno %d: %.2lf\n", i + 1, media_ponderada);

        if (media_ponderada >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    media_geral /= num_alunos;
    printf("\nMédia geral da turma: %.2lf\n", media_geral);

    return 0;
}
