#include <stdio.h>

int main() {

    double salario, mediaSalario = 0, maiorSalario = 0;
    int numFilhos, totalPessoas = 0, totalSalarioAte100 = 0;
    double mediaFilhos = 0;

    
    do {
        // Solicita o salário
        printf("Digite o salario, um numero negativo para encerrara : ");
        scanf("%lf", &salario);

        // Verifica se o salário é negativo e encerra o loop
        if (salario < 0) {
            break;
        }

        // Solicita o número de filhos
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        // Atualizaa os cálculos
        mediaSalario += salario;
        mediaFilhos += numFilhos;
        totalPessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            totalSalarioAte100++;
        }

    } while (1);

    // Calcula média do salário e média do número de filhos
    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        mediaFilhos /= totalPessoas;
    }

    // Exibi os resultados
    printf("\nResultados:\n");
    printf("a) Media do salario da população: %.2lf\n", mediaSalario);
    printf("b) Media do nemero de filhos: %.2lf\n", mediaFilhos);
    printf("c) Maior salario: %.2lf\n", maiorSalario);
    printf("d) Percentual de pessoas com salario até R$100.00: %.2lf%%\n", (double)totalSalarioAte100 / totalPessoas * 100);

    return 0;
}
