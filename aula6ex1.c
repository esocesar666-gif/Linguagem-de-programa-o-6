#include <stdio.h>

void conta(int numero) {
    for (int x = 1;x <= numero;x++) {
        printf ("%d ", x);
    }
}
int main () {
    conta(10);
    
    return 0;
}