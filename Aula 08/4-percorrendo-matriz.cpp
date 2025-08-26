#include <iostream>

using namespace std;

int main() {

  int matriz[2][2] = {
    {1, 2},
    {3, 4}
  };

  // Imprimindo a primeira linha
  for (int j = 0; j < 2; j++) {
    cout << matriz[0][j] << " ";
  }
  cout << endl;

  // Imprimindo linhas e colunas
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matriz[0][j] << " ";
    }
    cout << endl;
  }

  return 0;
}