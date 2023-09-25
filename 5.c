#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    
    // Solicita os valores do ponto p1 e p2
    printf("Digite as coordenadas de p1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas de p2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calcula a distância entre os pontos
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Exibe o resultado com 4 casas decimais após a vírgula
    printf("A distancia entre os pontos p1 e p2 e: %.4lf\n", distancia);
    
    return 0;
}
