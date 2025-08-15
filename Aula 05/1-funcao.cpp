#include <iostream>

using namespace std;

// Declaração da função
int somar(int x, int y); 

int main() {
    int numero1, numero2, soma;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    soma = somar(numero1, numero2); // Chamada da função

    cout << numero1 << " + " << numero2 << " = " << soma << endl;

    return 0;
}

// Definição da função
int somar(int x, int y) {
    return x + y;
}
