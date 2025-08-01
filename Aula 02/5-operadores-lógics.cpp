#include <iostream>
using namespace std;

int main() {
    int idade;
    char nacionalidade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Você é brasileiro? (S/N): ";
    cin >> nacionalidade;

    // Operador E (&&): ambas as condições precisam ser verdadeiras
    bool podeVotar = (idade >= 16 && (nacionalidade == 'S' || nacionalidade == 's'));

    // Exibindo o resultado
    cout << "\nPode votar? " << podeVotar << endl;

    return 0;
}
