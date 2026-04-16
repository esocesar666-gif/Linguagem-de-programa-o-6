#include <stdio.h>

float juros_compostos(float capital, float taxa, int tempo) {
    float capital_inicial = capital;
    
    while (0 < tempo) {
        capital = capital * (1 + taxa / 100);
        tempo--;
    }
      
    return capital - capital_inicial;
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
    
    printf("Total de juros compostos recebidos: %.2f", total);
    
    return 0;
}
