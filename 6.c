#include <stdio.h>

int main() {
    float x, y;
    
    // Le dos valores de x e y
    printf("Digite as coordenadas x e y com uma casa decimal: ");
    scanf("%f %f", &x, &y);
    
    // Verifica se o ponto está na origem
    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    // Verifica se o ponto está sobre o eixo X
    else if (x == 0) {
        printf("Eixo X\n");
    }
    // Verifica se o ponto está sobre o eixo Y
    else if (y == 0) {
        printf("Eixo Y\n");
    }
    // Verifica a qual quadrante o ponto pertence
    else {
        if (x > 0 && y > 0) {
            printf("Quadrante 1\n");
        } else if (x < 0 && y > 0) {
            printf("Quadrante 2\n");
        } else if (x < 0 && y < 0) {
            printf("Quadrante 3\n");
        } else {
            printf("Quadrante 4\n");
        }
    }
    
    return 0;
}
