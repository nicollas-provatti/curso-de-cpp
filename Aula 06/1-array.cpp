#include <iostream>

using namespace std;

int main() {
  int n1 = 1;
  int n2 = 2;
  int n3 = 3;

  int numeros[3]; // 0x7ffff24f911c -> [0:[1] 1:[2] 2:[3]]
  // int numeros[3] = {1, 2, 3};

  numeros[0] = 1;
  numeros[1] = 2;
  numeros[2] = 3;

  cout << numeros[0] << endl;
  cout << numeros[1] << endl;
  cout << numeros[2] << endl;

  int notas[5] = {6, 8, 7, 5, 9};
  int media;

  media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;

  cout << "Media: " << media << endl;

  return 0;
}