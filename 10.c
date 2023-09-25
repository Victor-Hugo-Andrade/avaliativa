#include <stdio.h>
#include <string.h>

struct Cidade {
    int codigo;
    char estado[3];
    int numVeiculos;
    int numAcidentes;
};

int main() {
    struct Cidade cidades[5];
    int i;

    // Dados ficticios , pois não encontrei dados de 1992
    strcpy(cidades[0].estado, "RS");
    cidades[0].codigo = 1;
    cidades[0].numVeiculos = 50000;
    cidades[0].numAcidentes = 3000;

    strcpy(cidades[1].estado, "SC");
    cidades[1].codigo = 2;
    cidades[1].numVeiculos = 60000;
    cidades[1].numAcidentes = 8000;

    strcpy(cidades[2].estado, "PR");
    cidades[2].codigo = 3;
    cidades[2].numVeiculos = 70000;
    cidades[2].numAcidentes = 15000;

    strcpy(cidades[3].estado, "SP");
    cidades[3].codigo = 4;
    cidades[3].numVeiculos = 80000;
    cidades[3].numAcidentes = 2000;

    strcpy(cidades[4].estado, "RJ");
    cidades[4].codigo = 5;
    cidades[4].numVeiculos = 90000;
    cidades[4].numAcidentes = 45000;

    
    int maiorIndice = 0;
    int menorIndice = 0;
    float mediaVeiculos = 0.0;
    float mediaAcidentesRS = 0.0;
    int numCidadesRS = 0;

    for (i = 0; i < 5; i++) {
        // Calculo do índice de acidentes de trânsito
        float indice = (float)cidades[i].numAcidentes / cidades[i].numVeiculos;

        // Verifica o maior e o menor índice
        if (indice > (float)cidades[maiorIndice].numAcidentes / cidades[maiorIndice].numVeiculos) {
            maiorIndice = i;
        }
        if (indice < (float)cidades[menorIndice].numAcidentes / cidades[menorIndice].numVeiculos) {
            menorIndice = i;
        }

        // Calculan a média de veículos
        mediaVeiculos += cidades[i].numVeiculos;

        // Calcula a média de acidentes com vítimas no RS
        if (strcmp(cidades[i].estado, "RS") == 0) {
            mediaAcidentesRS += cidades[i].numAcidentes;
            numCidadesRS++;
        }
    }

    // Exibe os resultados
    printf("A) Maior indice de acidentes: %s, %.2f\n", cidades[maiorIndice].estado, (float)cidades[maiorIndice].numAcidentes / cidades[maiorIndice].numVeiculos);
    printf("   Menor indice de acidentes: %s, %.2f\n", cidades[menorIndice].estado, (float)cidades[menorIndice].numAcidentes / cidades[menorIndice].numVeiculos);
    printf("B) Media de veiculos nas cidades: %.2f\n", mediaVeiculos / 5);
    
    if (numCidadesRS > 0) {
        printf("C) Media de acidentes com vitimas no RS: %.2f\n", mediaAcidentesRS / numCidadesRS);
    } 

    return 0;
}
