#include <stdio.h>

float juros_compostos(float capital, float taxa, int tempo) {
    int mes = 1;
    
    while (tempo > 0) {
        capital = capital * (1 + taxa / 100);
        
        printf("mes %d: %.2f\n", mes, capital);
        
        tempo--;
        mes++;
    }
      
    return capital;
}
    
int main () {
    float capital, taxa, tempo, total;
    
    printf("Digite o valor investido: ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    
    tempo = 12;
    total = juros_compostos(capital, taxa, tempo);
    
    return 0;
}