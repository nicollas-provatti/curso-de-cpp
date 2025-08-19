#include <iostream>

using namespace std;

void bubbleSort(int idades[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - 1; j++) {
      if (idades[j] > idades[j + 1]) {
        int temp = idades[j];
        idades[j] = idades[j + 1];
        idades[j + 1] = temp;
      }
    }
  }
}

void imprimirArray(int numeros[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
}

int main() {
  int idades[5] = {13, 29, 18, 53, 43}; 

  bubbleSort(idades, 5);

  imprimirArray(idades, 5);

  return 0;
}