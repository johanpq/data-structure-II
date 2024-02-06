#include <stdio.h>

int main() {

    int NumeroDoProduto[5] = {1, 2, 3, 4, 5};
    float PrecoDoProduto[5] = {3.00, 4.00, 2.80, 1.95, 5.00};

    int numero, QuantidadeVendida;

    float TotalDaVenda, TotalDaVenda1 = 0, TotalDaVenda2 = 0, TotalDaVenda3 = 0, TotalDaVenda4 = 0, TotalDaVenda5 = 0, SomaDosProdutos = 0;

    do {

        printf("======================================\n");
        printf("Numero do produto    Preco do Produto \n");

        for(int i = 0; i < 5; i++) {
            printf("       %d                    %.2f            \n", NumeroDoProduto[i], PrecoDoProduto[i]);
        }
        printf("======================================\n");

        printf("Digite o numero ou 0 para sair: ");
        scanf("%d", &numero);

        switch(numero) {
            case 1:
                printf("Quantidade vendida: ");
                scanf("%d", &QuantidadeVendida);
                TotalDaVenda1 = PrecoDoProduto[0] * QuantidadeVendida;
                SomaDosProdutos = SomaDosProdutos + TotalDaVenda1;
                break;
            case 2:
                printf("Quantidade vendida: ");
                scanf("%d", &QuantidadeVendida);
                TotalDaVenda2 = PrecoDoProduto[1] * QuantidadeVendida;
                SomaDosProdutos = SomaDosProdutos + TotalDaVenda2;
                break;
            case 3:
                printf("Quantidade vendida: ");
                scanf("%d", &QuantidadeVendida);
                TotalDaVenda3 = PrecoDoProduto[2] * QuantidadeVendida;
                SomaDosProdutos = SomaDosProdutos + TotalDaVenda3;
                break;
            case 4:
                printf("Quantidade vendida: ");
                scanf("%d", &QuantidadeVendida);
                TotalDaVenda4 = PrecoDoProduto[3] * QuantidadeVendida;
                SomaDosProdutos = SomaDosProdutos + TotalDaVenda4;
                break;
            case 5:
                printf("Quantidade vendida: ");
                scanf("%d", &QuantidadeVendida);
                TotalDaVenda5 = PrecoDoProduto[4] * QuantidadeVendida;
                SomaDosProdutos = SomaDosProdutos + TotalDaVenda5;
                break;
            default:
                printf("Numero errado!\n");
        }
    } while(numero != 0);

    TotalDaVenda = TotalDaVenda1 + TotalDaVenda2 + TotalDaVenda3 + TotalDaVenda4 + TotalDaVenda5;

    printf("Total de tudo e: %.2f reais", TotalDaVenda);

    
    


    return 0;
}