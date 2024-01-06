#include <stdio.h>

int isPrimo(int num);

int main() {

    for(int i = 0; i <= 100; i++) {
        if(isPrimo(i)) {
            printf("%d e primo\n", i);
        }
    }

    return 0;
}

int isPrimo(int num) {
    if (num <= 1) {
        return 0; // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }

    return 1; // Se não encontrou nenhum divisor, é primo
}

/* void NumeroPrimo(int PrimoN) {
    if(PrimoN > 1 && PrimoN <= 100) {
        if(PrimoN % 1 == 0 && PrimoN % PrimoN == 0) {
            printf("%d e primo!\n", PrimoN);
            NumeroPrimo(PrimoN + 1);
        } else {
            NumeroPrimo(PrimoN + 1);
        }
    } 
} */