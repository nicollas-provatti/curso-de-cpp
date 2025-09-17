#include <iostream>
#include <vector>  
using namespace std;

int main() {
  vector<int> numeros = {10, 20, 30, 40, 50};

  numeros.erase(numeros.begin());
  numeros.erase(numeros.begin() + 2);
  // numeros.erase(numeros.begin() + 1, numeros.begin() + 4);

  cout << "Vetor após as remoções: ";
  for (int numero : numeros) {
    cout << numero << " ";
  }
  cout << endl;

  return 0;
}