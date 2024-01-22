#include <stdio.h>

void incrementar(int nComeca, int nTermina);

int main() {

    int nComeca, nTermina;

    printf("Digite um numero para comecar: ");
    scanf("%d", &nComeca);

    printf("Digite um numero para terminar: ");
    scanf("%d", &nTermina);

    incrementar(nComeca, nTermina);

    return 0;
}

void incrementar(int nComeca, int nTermina) {
    int n = nComeca;
    if(n == nTermina) {
        printf("%d\n", n);
    } else if(nComeca >= 0 && !(nTermina <= 0)) {
        printf("%d\n", n);
        incrementar(n + 1, nTermina); // nTermina aqui serve como o limitador da recursão, ou seja, vai incrementar até ser igual a nTermina
    }
}