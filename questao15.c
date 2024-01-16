#include <stdio.h>

int main() {

    int lado1, lado2;

    printf("Informe o lado1: ");
    scanf("%d", &lado1);

    printf("Informe o lado2: ");
    scanf("%d", &lado2);

    for(int i = 1; i <= lado1; i++) {
        for(int j = 1; j <= lado2; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}