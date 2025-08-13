#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um número positivo: ";
        cin >> numero;  
    } while (numero <= 0);  

    cout << "Você digitou: " << numero << endl;

    return 0;  
}
