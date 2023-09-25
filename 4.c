#include <stdio.h>

int main() {
    float A, B, C;

// Solicia os valores 
    printf("Digite os  valores A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

// Classifica seu tipo 
    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("Os lados formam um Triangulo Equilatero.\n");
        } else if (A == B || B == C || A == C) {
            printf("Os lados formam um Triangulo Isosceles.\n");
        } else {
            printf("Os lados formam um Triagulo Escaleno.\n");
        }

// Classifica segundo os angulos 
        if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
            printf("E um Triangulo Retangulo.\n");
        } else if (A * A > B * B + C * C || B * B > A * A + C * C || C * C > A * A + B * B) {
            printf("E um Triangulo Obtusangulo.\n");
        } else {
            printf("E um Triangulo Acutangulo.\n");
        }
    } else {
        printf("Esses valores nao podem formar um triangulo.\n");
    }

    return 0;
}
