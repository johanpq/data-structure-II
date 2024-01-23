/* Calcular a média do tempo do algoritmo

    Cria um loop, se quiser testar com uma repetição de 10x

 */

/* clock example: frequency of primes */
#include <math.h>  /* sqrt */
#include <stdio.h> /* printf */
#include <stdlib.h>
#include <time.h> /* time, clock_t, clock, CLOCKS_PER_SEC */

void insertionSort(int arr[], int size) {
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

int main() {
  clock_t t;
  int f;
  int k = 10000;
  int *arr;
  printf("Calculando...\n");
  arr = (int *)malloc(k * sizeof(int));
  clock_t s = 0;
  for (int i = 0; i < 10; i++) {
    // preparação
    for (int i = 0; i < k; i++) {
      arr[i] = rand() % k;
    }
    t = clock();
    insertionSort(arr, k);
    s += clock() - t;
  }
  printf("Tempo decorrido %f\n", ((float)s) / (10*CLOCKS_PER_SEC));

  return 0;
}