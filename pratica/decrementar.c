#include <stdio.h>

void DecrementarNumero(int n);

int main() {

    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    DecrementarNumero(n);


    return 0;
}

void DecrementarNumero(int n) {
    if(n > 0) {
        printf("%d\n", n);
        DecrementarNumero(n - 1);
    }
}