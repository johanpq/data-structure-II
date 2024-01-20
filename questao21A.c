#include <stdio.h>

int Mdc(int a, int b);

int main() {
    int numero1, numero2;
    
    printf("Informe o numero 1 e o 2: ");
    scanf("%d%d", &numero1, &numero2);

    int resultado = Mdc(numero1, numero2);

    printf("O MDC entre %d e %d e: %d\n", numero1, numero2, resultado);

    return 0;
}

int Mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return Mdc(b, a % b);
    }
}
