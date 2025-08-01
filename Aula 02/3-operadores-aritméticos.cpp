#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    cout << "\nResultados das operações aritméticas:" << endl;
    cout << "Soma: " << a + b << endl;
    cout << "Subtração: " << a - b << endl;
    cout << "Multiplicação: " << a * b << endl;
    cout << "Divisão inteira: " << a / b << endl;
    cout << "Resto da divisão (módulo): " << a % b << endl;

    return 0;
}
