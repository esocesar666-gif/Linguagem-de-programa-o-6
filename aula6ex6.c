#include <stdio.h>

float juros_compostos(float capital, float taxa, int tempo) {
    
    while (0 < tempo) {
        capital = capital * (1 + taxa / 100);
        tempo--;
    }
      
    return capital;
}
    
int main () {
    float capital, taxa, tempo, total;
    
    printf("Digite o valor investido: ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo: ");
    scanf("%f", &tempo);
    
    total = juros_compostos(capital, taxa, tempo);
    
    printf("Total: %.2f", total);
    
    return 0;
}