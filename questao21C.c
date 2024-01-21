#include <stdio.h>

int fibonacci(int numero);

int main() {
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int numero) {
    if (numero <= 1) {
        return numero;
    } else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}
