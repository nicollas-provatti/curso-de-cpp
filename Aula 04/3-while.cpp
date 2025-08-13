#include <iostream>
using namespace std;

int main() {
    int contador = 0; 


    while (contador <= 0) {
        cout << "Contador: " << contador << endl;  
        contador++;  
    }
 
    while (true) {
      int numero;
      cout << "Digite um número: ";
      cin >> numero;

      if (numero == 0) {
        cout << "Saindo do laço" << endl;
        break;
      }
    }

    return 0;  
}
