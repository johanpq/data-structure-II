#include <stdio.h>

int main() {

    int mult, soma = 0;

    for(int i = 1; i <= 100; i++) {
        mult = 7 * i;
        soma = soma + mult;
        printf("%d\n", mult);
    }
    
    printf("Soma e: %d", soma);

    return 0;
}