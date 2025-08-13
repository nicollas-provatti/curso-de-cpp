#include <iostream>
using namespace std;

int main() {
    int qtdNumeros, qtdPares = 0, qtdImpares = 0, soma = 0;

    cout << "Quantos números você quer digitar? ";
    cin >> qtdNumeros;  

    // laço for para repetir a leitura dos números
    for (int contador = 1; contador <= qtdNumeros; contador++) {
        int numero;
        cout << "Digite um número: ";
        cin >> numero;  

        if (numero % 2 == 0) {
            qtdPares++;  // incrementa se for par
        } else {
            qtdImpares++;  // incrementa se for ímpar
        }

        soma += numero;  // soma acumulada dos números
    }

    cout << "Números pares: " << qtdPares << endl;
    cout << "Números ímpares: " << qtdImpares << endl;
    cout << "A soma dos números foi: " << soma << endl;

    return 0;  
}
