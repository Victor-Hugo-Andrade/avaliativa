#include <stdio.h>

int main() {
    // Declarando  variáveis
    float x, resultado;

    // Solicita  o valor de x
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    // Verifica se o denominador x² - 16 é igual a zero
    if (x * x - 16 == 0) {
        printf("O denominador x² - 16 não pode ser igual a zero.\n");
    } else {
        // Calcula f(x)
        resultado = (5 * x + 3) / (x * x - 16);

        // Imprime o resultado
        printf("O valor de f(x) e: %.2f\n", resultado);
    }

    return 0;
}
