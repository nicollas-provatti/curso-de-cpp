#include <iostream>
#include <vector>  
using namespace std;

int main() {

    vector<int> numeros;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Elementos do vetor: ";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    numeros.push_back(40);
    numeros.push_back(50);

    cout << "Elementos do vetor: ";
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}