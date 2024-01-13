#include <stdio.h>

int main() {

    double R;

    R = 4 * (1.0 - 1.0/3);
    printf("Termo 1: 1 - 1/3 \t Resultado: %lf\n", R);

    R = 4 * (1.0 - 1.0/3 + 1.0/5);
    printf("Termo 2: 1 - 1/3 + 1/5 \t Resultado: %lf\n", R);

    R = 4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7);
    printf("Termo 3: 1- 1/3 + 1/5 - 1/7 \t Resultado: %lf\n", R);

    R = 4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9);
    printf("Termo 4: 1 - 1/3 + 1/5 - 1/7 + 1/9 \t Resultado: %lf\n", R);

    R = 4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11);
    printf("Termo 4: 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 \t Resultado: %lf\n", R);

    return 0;
}