#include <stdio.h>

float diametro(float x) {
    return 2 * x;
}

int main () {
    float resultado;
    
    resultado = diametro(3.5);
    
    printf("Diametro do circulo: %.1f", resultado);
    
    return 0;
}