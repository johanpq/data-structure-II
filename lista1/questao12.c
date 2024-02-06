#include <stdio.h>

void DecimalParaRomano(int numero);

int main() {

    for (int i = 1; i <= 100; i++) {
        printf("%d\t\t", i);
        DecimalParaRomano(i);
        printf("\n");
    }

    return 0;
}

void DecimalParaRomano(int numero) {
    int valoresDecimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *algarismosRomanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (numero >= valoresDecimais[i]) {
            printf("%s", algarismosRomanos[i]);
            numero -= valoresDecimais[i];
        }
    }
}
