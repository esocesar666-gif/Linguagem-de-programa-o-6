#include <stdio.h>

float juros_compostos(float capital, float taxa, int tempo) {
    int mes = 1;
    
    while (0 < tempo) {
        capital = capital * (1 + taxa / 100);
        
        printf("mes %d: %.2f\n", mes, capital);
        
        tempo--;
        mes++;
    }
      
    return capital;
}
    
int main () {
    float capital, taxa, total;
    int tempo;
   
    printf("Digite o valor investido: ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo: ");
    scanf("%d", &tempo);
    
    total = juros_compostos(capital, taxa, tempo);
    
    printf("Total no final do periodo: %.2f", total);
    
    return 0;
}
