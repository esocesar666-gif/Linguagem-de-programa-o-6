#include <stdio.h>

float diametro(float r) {
    return 2 * r;
}
float circunferencia(float r) { 
    return 2 * 3.14 * r; 
}
float area(float r) {
    return 3.14 * r * r;
}

int main () {
    float r, d, c, a;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    
    d = diametro(r);
    c = circunferencia(r);
    a = area(r);

    printf("Raio: %.2f\n", r);
    printf("Diâmetro: %.2f\n", d);
    printf("Circunferência: %.2f\n", c);
    printf("Área: %.2f", a);
    
    return 0;
}