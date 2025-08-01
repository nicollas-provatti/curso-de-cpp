#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    cout << "Valor inicial de a: " << a << endl;
    cout << "Pré-incremento (++a): " << ++a << endl;  // incrementa antes de usar
    cout << "Valor atual de a: " << a << endl;

    cout << "\nValor inicial de b: " << b << endl;
    cout << "Pós-incremento (b++): " << b++ << endl;  // usa, depois incrementa
    cout << "Valor atual de b: " << b << endl;

    // Decremento
    int x = 10, y = 10;

    cout << "\nValor inicial de x: " << x << endl;
    cout << "Pré-decremento (--x): " << --x << endl;  // decrementa antes de usar
    cout << "Valor atual de x: " << x << endl;

    cout << "\nValor inicial de y: " << y << endl;
    cout << "Pós-decremento (y--): " << y-- << endl;  // usa, depois decrementa
    cout << "Valor atual de y: " << y << endl;

    return 0;
}
