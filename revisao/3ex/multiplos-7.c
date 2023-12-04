#include <stdio.h>

int Multiplo(int mult, int i);

int main() {

    int multiplicacao = Multiplo(7, 1);

   /*  printf("Soma e: %d", soma); */

    return 0;
}

int Multiplo(int mult, int i) {
    int multiplicacao, soma;

    if(mult <= 700) {
        multiplicacao = mult * i;
        printf("%d\n", mult);
        mult += 7;
        soma = soma + multiplicacao;
        return Multiplo(mult, i + 1);
    }
}

