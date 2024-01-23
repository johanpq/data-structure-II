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
  int *arr;
  printf("Calculando...\n");
  clock_t s;
  for (int k = 10000; k <= 1000000; k = k + 10000) {
  arr = (int *)malloc(k * sizeof(int));
    s = 0;
    for (int i = 0; i < 5; i++) {
      // preparação
      for (int i = 0; i < k; i++) {
        arr[i] = rand() % k;
      }
      t = clock();
      insertionSort(arr, k);
      s += clock() - t;
    }
    printf("Tempo decorrido para %d: %f\n", k, ((float)s) / (5 * CLOCKS_PER_SEC));
  }

  return 0;
}