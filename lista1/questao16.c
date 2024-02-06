#include <stdio.h>

void funcaoImprimir(int caractere) {
    printf("%c", caractere);
}

int main() {

    char caractere;

    printf("Informe o caractere: ");
    scanf("%c", &caractere);

    funcaoImprimir(caractere);

    return 0;
}