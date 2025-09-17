#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
  vector<int> numeros = {5, 2, 9, 1, 7};

  sort(numeros.begin(), numeros.end());  
  // sort(numeros.begin(), numeros.end(), greater<int>());  

  cout << "Vetor ordenado: ";
  for(int numero : numeros) {
    cout << numero << " ";
  }
  cout << endl << endl;

  reverse(numeros.begin(), numeros.end());

  cout << "Vetor ordem inversa: ";
  for(int numero : numeros) {
    cout << numero << " ";
  }
  cout << endl << endl;

  auto it = find(numeros.begin(), numeros.end(), 7);
  if (it != numeros.end()) {
    cout << "Elemento 7 encontrado!" << endl;
  } else {
    cout << "Elemento 7 não encontrado." << endl;
  }
  cout << endl << endl;

  int c = count(numeros.begin(), numeros.end(), 5);
  cout << "O número 5 aparace " << c << " vez(es)" << endl << endl;

  cout << "Maior valor: " << *max_element(numeros.begin(), numeros.end()) << endl;
  cout << "Menor valor: " << *min_element(numeros.begin(), numeros.end()) << endl;

  return 0;
}