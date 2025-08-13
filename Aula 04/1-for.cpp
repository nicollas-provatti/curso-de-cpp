#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        cout << i << endl; 
    }

    int qtdNumeros;
    cout << "Quantas vezes você deseja repetir? ";
    cin >> qtdNumeros;

    for (int contador = 1; contador <= qtdNumeros; contador++) {
        cout << contador << endl;
    }

    return 0;  
}
