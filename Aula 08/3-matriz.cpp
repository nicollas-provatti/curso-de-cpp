#include <iostream>

using namespace std;

int main() {
  int n1 = 1;
  int n2 = 2;
  int n3 = 3;
  int n3 = 4;

  int matriz[2][2];
  // int matriz = {{1, 2}, {3, 4}} 
  // [[][]]
  // [[][]]

  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[1][0] = 3;
  matriz[1][1] = 4;

  cout << matriz[0][0] << endl;
  cout << matriz[0][1] << endl;
  cout << matriz[1][0] << endl;
  cout << matriz[1][1] << endl;

  return 0;
}