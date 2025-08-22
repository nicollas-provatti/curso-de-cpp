#include <iostream>

using namespace std;

/*
  6: n = 5; escreva(5);
  5: n = 4; escreva(4); imprimir(5) || escreva(4)
  4: n = 3; escreva(3); imprimir(4) || escreva(3)
  3: n = 2; escreva(2); imprimir(3) || escreva(2)
  2: n = 1; escreva(1); imprimir(2) || escreva(1)
  1: n = 0; escreva(0); imprimir(1) || escreva(0)
*/

void imprimir(int numero) {
    if (numero == 5) {
        cout << numero << " ";
    } 
    else {
        cout << numero << " ";
        imprimir(numero + 1);
        cout << numero << " ";
    }
}

int main() {
    imprimir(0); 
    return 0;
}
