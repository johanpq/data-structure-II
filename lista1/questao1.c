#include <stdio.h>

int soma(int quantidade);

int main () {
    int quantidade;

    printf("Digite a quantidade de numeros inteiros: ");
    scanf("%d", &quantidade);

    int Soma = soma(quantidade);

    printf("A soma e: %d\n", Soma);
    printf("A media e: %d", Soma / quantidade);


    return 0;
}

int soma(int quantidade) {
    int numeros;
    if(quantidade == 0) {
        return 0;
    } else {
        printf("Numero: ");
        scanf("%d", &numeros);
        return numeros + soma(quantidade - 1);
    }
}