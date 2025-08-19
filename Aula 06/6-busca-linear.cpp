#include <iostream>

using namespace std;

int buscaLinear(int arr[], int tamanho, int valor) {
  for (int i = 0; i < tamanho; i++) {
    if (arr[i] == valor) {
      return i; // Retorna o índice onde encontrou
    }
  }
  return -1; // Não encontrado
}

int main() {
  int numeros[] = {10, 20, 30, 40, 50};
  int valor = 30;
  int indice = buscaLinear(numeros, 5, valor);

  if (indice != -1) {
    cout << "Valor encontrado na posição: " << indice << endl;
  }
  else {
    cout << "Valor não encontrado." << endl;
  }

  return 0;
}