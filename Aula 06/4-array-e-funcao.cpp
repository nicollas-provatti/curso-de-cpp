#include <iostream>

using namespace std;

void imprimirArray(int numeros[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
}

void dobrarArray(int numeros[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    numeros[i] = numeros[i] * 2;
  }
}

int main() {
  int numeros[5] = {10, 20, 30, 40, 50};

  imprimirArray(numeros, 5);

  dobrarArray(numeros, 5);

  imprimirArray(numeros, 5);

  return 0;
}