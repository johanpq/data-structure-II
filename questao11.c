#include <stdio.h>
#include <math.h>

void Pitagoricos(int n);

int main() {

    int n;

    printf("Informe n: ");
    scanf("%d", &n);
    
    Pitagoricos(n);

    return 0;
}

void Pitagoricos(int n) {
    for (int cateto1 = 1; cateto1 <= n; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++) {
            int hipotenusa = n - cateto1 - cateto2;

            if (hipotenusa == sqrt(cateto1 * cateto1) + sqrt(cateto2 * cateto2)) {
                printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
            }
        }
    }
}