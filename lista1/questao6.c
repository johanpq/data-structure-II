#include <stdio.h>

int main() {

     int numero;

     printf("Insira o numero: ");
     scanf("%d", &numero);

     int fatorial;

     printf("=======================\n");
     printf("    Numero\nFatorial   \n");
     printf("           -           \n");

     for(int i = numero; i >= 1; i--) {
        fatorial = numero * i;
        printf("%d\t%d\n", i, fatorial);
     }

    return 0;
}