#include <stdio.h>

int soma(int n);

int main() {

    int n;

    printf("Informe n: ");
    scanf("%d", &n);

    int Soma = soma(n);

    printf("Soma dos digitos e: %d", Soma);

    return 0;
}

int soma(int n) {
    int Soma = 0;

    while (n != 0) {
        Soma = Soma + (n % 10);
        n = n / 10;
    }

    return Soma;
}