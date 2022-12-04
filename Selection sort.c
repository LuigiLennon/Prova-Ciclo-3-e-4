#include <stdio.h>

// função para trocar a posição de dois elementos
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // Para classificar em ordem decrescente, altere > para < nesta linha.
      // Selecione o elemento mínimo em cada loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // coloque min na posição correta
    swap(&array[min_idx], &array[step]);
  }
}

// função para imprimir uma matriz
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// código do driver
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}