#include <stdio.h>

int isPrime(int numero);

int main() {

    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    int Primo = isPrime(numero);

    if(Primo % (numero - 1) == 0) {
        printf("%d e primo!");
    } else {
        printf("%d nao e primo!");
    }

    return 0;
}

int isPrime(int numero) {
    if(numero < 2) {
        return numero;
    } else {
        return numero / isPrime(numero - 1);
    }
}