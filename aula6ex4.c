#include <stdio.h>

float area(float r) {
    return 3.14 * r * r;
}

int main () {
    float resultado;
    
    resultado = area(5);
    
    printf("Area do circulo: %.1f", resultado);
    
    return 0;
}