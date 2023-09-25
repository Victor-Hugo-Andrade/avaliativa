#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;
    int voto;

    printf("Digite o codigo do candidato 1, 2, 3, 4, 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: \n");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; // Encerra o loop quando o valor 0 é inserido
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                printf("Codigo de voto invalido!\n");
        }

        printf("Digite o proximo codigo de voto ou 0 para encerrar: \n");
    }

    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    return 0;
}
