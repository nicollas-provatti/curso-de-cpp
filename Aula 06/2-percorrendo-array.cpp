#include <iostream>

using namespace std;

int main() {

  int numeros[5] = {10, 20, 30, 40, 50};

  // Imprimir (1)
  for (int i = 0; i < 5; i++) {
    cout << numeros[i] << endl;
  }

  // Somando
  int soma = 0;

  for (int i = 0; i < 5; i++) {
    soma = soma + numeros[i];
  }

  cout << "Soma: " << soma << endl;

  // Imprimir (2)
  for (int n : numeros) {
    cout << n << endl;
  }

  return 0;
}