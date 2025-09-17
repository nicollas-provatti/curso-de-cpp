#include <iostream>
#include <vector>  
using namespace std;

int main() {
  vector<int> numeros = {10, 20, 30, 40, 50};

  numeros.pop_back();
  numeros.pop_back();
  numeros.pop_back();

  cout << "Elementos após remoções: ";
  for (int n : numeros) {
    cout << n << " ";
  }
  cout << endl << endl;

  cout << "Primeiro elemento: " << numeros.front() << endl;
  cout << "Úiltimo elemento: " << numeros.back() << endl;

  return 0;
}