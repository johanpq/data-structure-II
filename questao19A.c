#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float Delta;

    printf("Informe a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    Delta = b * b - 4 * a * c;

    if(Delta > 0) {
        printf("Ha dua raiz!");
    } else if(Delta == 0) {
        printf("Ha uma raiz!");
    } else {
        printf("Nao ha raiz!");
    }


    return 0;
}