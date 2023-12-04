#include <stdio.h>

void NumeroPrimo(int PrimoN);

int main() {

    NumeroPrimo(1);

    return 0;
}

void NumeroPrimo(int PrimoN) {
    if(PrimoN <= 100) {
        if(PrimoN / 1 == 1 && PrimoN % PrimoN == 0) {
            printf("%d e primo!\n", PrimoN);
            NumeroPrimo(PrimoN + 1);
        } else {
            return NumeroPrimo(PrimoN + 1);
        }
    }
    
}