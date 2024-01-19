#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float Delta;
    float x, x1, x2;

    printf("Informe a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    Delta = b * b - 4 * a * c;

    if(Delta > 0) {
        printf("Ha dua raiz!");
        x1 = (-b + sqrt(Delta)) / (2 * a);
        x2 = (-b - sqrt(Delta)) / (2 * a);
        printf("x1 = %.f \t x2 = %.f", x1, x2);
    } else if(Delta == 0) {
        printf("Ha uma raiz!");
        x = (-b + sqrt(Delta)) / (2 * a);
        printf("x = %.f", x);
    } else {
        printf("Nao ha raiz!");
    }


    return 0;
}