#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5;

    printf("Insira 5 numeros: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    printf("\nNumero 1 = %d", n1);

    if(n1 <= 30) {
        for(int i = 1; i <=n1; i++) {
            printf(" *");
        }
    } else {
        printf("\tNumero tem que ser menor do que 30\n");
    }

    

    printf("\nNumero 2 = %d", n2);

    if(n2 <= 30) {
        for(int i = 1; i <=n2; i++) {
            printf(" *");
        }
    } else {
        printf("\tNumero tem que ser menor do que 30\n");
    }

    printf("\nNumero 3 = %d", n3);

    if(n3 <= 30) {
        for(int i = 1; i <=n3; i++) {
            printf(" *");
        }
    } else {
        printf("\tNumero tem que ser menor do que 30\n");
    }

    printf("\nNumero 4 = %d", n4);

    if(n4 <= 30) {
        for(int i = 1; i <=n4; i++) {
            printf(" *");
        }
    } else {
        printf("\tNumero tem que ser menor do que 30\n");
    }

    printf("\nNumero 5 = %d", n5);

    if(n5 <= 30) {
        for(int i = 1; i <=n5; i++) {
            printf(" *");
        }
    } else {
        printf("\tNumero tem que ser menor do que 30\n");
    }

    return 0;
}