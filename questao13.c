#include <stdio.h>

int main() {

    int DiaDaSemana;
    int DiaDoMes;
    int Mes;
    int Ano;
    int Seculo;

    printf("Dia do mes: ");
    scanf("%d", &DiaDoMes);

    printf("Mes: ");
    scanf("%d", &Mes);

    printf("Ano: ");
    scanf("%d", &Ano);

    printf("Seculo: ");
    scanf("%d", &Seculo);

    DiaDaSemana = (DiaDoMes + ((13 * (Mes+1)) / 5) + Ano + (Ano / 4) + (Seculo / 4) - 2 * Seculo) % 7;

    /* if(DiaDaSemana < 0) {
        DiaDaSemana = DiaDaSemana + 7;
    } */

    switch(DiaDaSemana) {
        case 0: 
            printf("Domingo\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 1:
            printf("Segunda\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 2:
            printf("Terca\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 3:
            printf("Quarta\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 4:
            printf("Quinta\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 5:
            printf("Sexta\t%d\t%d\n", DiaDoMes, Ano);
            break;
        case 6:
            printf("Sabado\t%d\t%d\n", DiaDoMes, Ano);
            break;
        default:
            printf("Erro!");
    }


    return 0;
}