#include <stdio.h>

void IsPerect(int n);

int main() {

    int n;

    printf("Informe n: ");
    scanf("%d", &n);

    IsPerect(n);


    return 0;
}

void IsPerect(int n) {
    int soma = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            soma = soma + i ;
        } 
    }

    if(soma == n) {
        printf("%d e um numero perfeito!\n", n);
    } else {
        printf("Nao e");
    }
}