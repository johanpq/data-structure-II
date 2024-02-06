#include <stdio.h>
#include <math.h>

int main() {
	int numero;
	printf("Insira um valor:\n"); 
	scanf ("%d", &numero);
	
	int Soma = 0, somaQ = 0, somaC = 0;
	
	for(int i = 1; i <= numero; i++){
		Soma = Soma + i;
		somaQ = somaQ + pow(i, 2);
		somaC = somaC + pow(i, 3);
	}
		
		printf("A soma:%d \n", Soma);
		printf("Soma do Quadrado: %d", somaQ);
		printf("Soma do Cubo: %d\n", somaC);
	 
	return 0;
}