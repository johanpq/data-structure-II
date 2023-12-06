#include <stdio.h>
#include <math.h>

int main(){
	int numero,i,j;
	printf("Insira um valor:\n"); 
	scanf ("%d", &numero);
	
	for (i = 1; i <= 3; i++){
		int s = 0;
		for(j = 1; j <= numero; j++){
			s = s + pow(j,i);
		}
		
		printf("A soma:%d \n", s);
		
	}
	 
	return 0;
}