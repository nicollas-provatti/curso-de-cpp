#include <iostream>

using namespace std;

int main() {

    int numero = 10;

    cout << "numero (valor): " << numero << endl;
    cout << "numero (ender): " << &numero << endl << endl;

    int *ponteiro = nullptr;

    ponteiro = &numero;

    cout << "ponteiro (valor): " << ponteiro << endl;
    cout << "ponteiro (ender): " << &ponteiro << endl;
    cout << "ponteiro (*pont): " << *ponteiro << endl << endl;

    *ponteiro = 20;

    cout << "numero (valor): " << numero << endl;

    return 0;
}