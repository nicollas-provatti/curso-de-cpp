#include <iostream>

using namespace std;

int main() {
  const int N = 3;
  int matriz[N][N] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int valor = 5;
  
  bool encontrado = false;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (matriz[i][j] == valor) {
        cout << "Valor encontrado";
        encontrado = true;
        break;
      }
    }
  }

  if (encontrado == false) {
    cout << "Valor não encontrado na matriz.\n";
  }

  return 0;
}
