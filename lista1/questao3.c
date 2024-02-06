#include <stdio.h>

int Soma_Multiplo(int mult, int i);

int main() {

    int multiplicacao = Soma_Multiplo(7, 1);

   printf("Soma e: %d", multiplicacao);

    return 0;
}

int Soma_Multiplo(int mult, int i) {
    int multiplicacao, soma;

    if(i <= 100) {
        multiplicacao = mult * i;
        mult += 7;
        soma = soma + multiplicacao;
        return Soma_Multiplo(mult, i + 1);
    }
}

