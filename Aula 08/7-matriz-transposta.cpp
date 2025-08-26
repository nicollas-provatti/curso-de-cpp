#include <iostream>

using namespace std;

int main() {
  const int LINHAS = 3;
  const int COLUNAS = 2;

  int matriz[LINHAS][COLUNAS] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };

  int transposta[COLUNAS][LINHAS];

  // Transpor a matriz
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      transposta[j][i] = matriz[i][j];
    }
  }

  // Imprimir matriz transposta
  cout << "Matriz transposta:\n";
  for (int i = 0; i < COLUNAS; i++) {
    for (int j = 0; j < LINHAS; j++) {
      cout << transposta[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
