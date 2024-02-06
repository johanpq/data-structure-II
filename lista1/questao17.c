#include <stdio.h>

int segundos(int horas, int minutos, int segundos) {
    
    horas = horas % 12;

    int totalSegundos = horas * 3600 + minutos * 60 + segundos;

    return totalSegundos;
}

int diferencaEntreTempos(int horas1, int minutos1, int segundos1, int horas2, int minutos2, int segundos2) {
    int segundosTempo1 = segundos(horas1, minutos1, segundos1);
    int segundosTempo2 = segundos(horas2, minutos2, segundos2);

    int diferencaSegundos = segundosTempo2 - segundosTempo1;

    if (diferencaSegundos < 0) {
        diferencaSegundos += 12 * 3600; 
    }

    return diferencaSegundos;
}

int main() {
    int horas1, minutos1, segundos1;
    int horas2, minutos2, segundos2;

    printf("Informe o primeiro tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas1, &minutos1, &segundos1);

    printf("Informe o segundo tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas2, &minutos2, &segundos2);

    int diferenca = diferencaEntreTempos(horas1, minutos1, segundos1, horas2, minutos2, segundos2);

    printf("A diferenca e: %d segundos\n", diferenca);

    return 0;
}
