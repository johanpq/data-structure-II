/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main ()
{
  clock_t t; // cria variável
  int f;
  int k = 10;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   printf ("Calculating...\n");
  t = clock(); // inicializa o clock
  insertionSort(arr, k);
  t = clock() - t; // calcula a diferença da hora atual menos o t lá de cima
  printf ("Tempo decorrido %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC); //e divide por clocks por segundo
  return 0;
}