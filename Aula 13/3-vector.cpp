#include <iostream>
#include <vector>  
using namespace std;

int main() {

    vector<int> numeros;

    for (int i = 1; i <= 5; i++) {
        numeros.push_back(i * 10);
        cout << "Elemento: " << numeros.at(i - 1) << " | ";
        cout << "Tamanho: " << numeros.size() << " | ";
        cout << "Capacidade: " << numeros.capacity() << endl;
    }

    numeros.clear();

    cout << endl;

    cout << "Tamanho: " << numeros.size() << endl;
    cout << "Capacidade: " << numeros.capacity() << endl;

    return 0;
}