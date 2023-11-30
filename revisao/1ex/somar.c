#include <stdio.h>

int main () {
    int quantidade;

    printf("Digite a quantidade de numeros inteiros: ");
    scanf("%d", &quantidade);

    int numeros;
    int auxiliar = 0;


    for(int i = 0; i < quantidade; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros);

        auxiliar = auxiliar + numeros;
    }

    int media = auxiliar / quantidade;
    
    printf("Total de numeros e: %d\n", quantidade);
    printf("Soma de numero e: %d\n", auxiliar);
    printf("Media: %d", media);


    return 0;
}