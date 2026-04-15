#include <stdio.h>

float circunferencia(float r) {
    return 2 * 3.14 * r;
}

int main () {
    float resultado;
    
    resultado = circunferencia(5);
    
    printf("Circunferencia do circulo: %.2f", resultado);
    
    return 0;
}