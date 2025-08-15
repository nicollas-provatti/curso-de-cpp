#include <iostream>

using namespace std;

void dobrar(int numero) {
    numero = numero * 2;
}

int main() {
    int numero = 10;

    dobrar(numero);

    cout << "Número: " << numero << endl;

    return 0;
}
