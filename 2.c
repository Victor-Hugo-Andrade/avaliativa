#include <stdio.h>

int main() {
    float altura_chico = 150;  
    float altura_ze = 110;    
    int anos = 0;             

    while (altura_ze <= altura_chico) {
        altura_chico += 2;  
        altura_ze += 3;     
        anos++;
    }

    printf("Sera necessarios %d anos para que Ze seja maior que Chico.\n", anos);

    return 0;
}
