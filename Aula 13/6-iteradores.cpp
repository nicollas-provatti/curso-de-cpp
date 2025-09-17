#include <iostream>
#include <vector>  
using namespace std;

int main() {
  vector<int> numeros = {10, 20, 30, 40, 50};

  /* vector<int>::iterator it; */

  cout << "Primeiro elemento: " << *numeros.begin() << endl;
  cout << "Último  elemento:  " << *(numeros.end() - 1) << endl << endl;

  cout << "Elementos do vetor: ";
  for (auto it = numeros.begin(); it != numeros.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}