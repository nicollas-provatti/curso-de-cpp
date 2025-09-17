#include <iostream>
#include <vector>  
using namespace std;

int main() {
  vector<int> numeros(5, 0);

  cout << "Números: ";
  for (int numero : numeros) {
    cout << numero << " ";
  }
  cout << endl;

  return 0;
}