#include <stdio.h>

int main() {
    float A, B, C;
    
    // Solicitea os valores de A, B e C ao usuário
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    
    // Verifica se os valores formam um triângulo
    if (A + B > C && B + C > A && A + C > B) {
        // Verifique o tipo de triângulo
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || B == C || A == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }
    
    return 0;
}
