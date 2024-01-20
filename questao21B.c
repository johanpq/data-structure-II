#include <stdio.h>

int Fatorial(int numero);

int main() {

    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    int Fat = Fatorial(numero);

    printf("O fatorial e: %d", Fat);

    return 0;
}

int Fatorial(int numero) {
    if(numero == 0) {
        return 1;
    } else {
        return numero * Fatorial(numero - 1);
    }
}