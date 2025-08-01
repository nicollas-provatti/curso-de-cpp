#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    // Uso do operador ternário: Se a condição for verdadeira, retorna o valor antes dos dois-pontos; senão, o valor depois.
    string resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    cout << "Resultado: " << resultado << endl;

    return 0;
}
