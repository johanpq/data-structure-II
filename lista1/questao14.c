#include <stdio.h>
#include <math.h>

int hipotenusa(int lado1, int lado2);

int main() {

    int lado1, lado2;

    printf("Informe os lados: ");
    scanf("%d%d", &lado1, &lado2);

    int Resultado = hipotenusa(lado1, lado2);

    printf("Resultado: %d", Resultado);

    return 0;
}

int hipotenusa(int lado1, int lado2) {
    int Hipotenusa = sqrt(pow(lado1, 2)) + sqrt(pow(lado2, 2));
    return Hipotenusa;
}