#include <iostream>

using namespace std;

int main() {
  const int N = 3;
  int matriz[N][N] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  // diagonal principal
  int somaPrincipal = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        somaPrincipal += matriz[i][i];
      }
    }
  }

  for (int i = 0; i < N; i++) {
    somaPrincipal += matriz[i][i]; 
  }

  cout << "Soma da diagonal principal: " << somaPrincipal << endl;

  // diagonal secundária
  int somaSecundaria = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (j == N - 1 - i) {
        somaSecundaria += matriz[i][N - 1 - i]; 
      }
    }
  }

  for (int i = 0; i < N; i++) {
    somaSecundaria += matriz[i][N - 1 - i]; 
  }

  cout << "Soma: " << somaSecundaria << endl;
  
  return 0;
}
