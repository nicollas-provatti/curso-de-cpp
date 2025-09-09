#include <iostream>

using namespace std;

int main() {
    
    int tamanho;

    cout << "Quantos números você desejar armazenar ? ";
    cin >> tamanho;

    cout << endl;

    int *numeros = new int[tamanho];

    cout << "Digite " << tamanho << " números: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> numeros[i]; 
    }

    cout << endl;
    
    cout << "Números digitados: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    int novoTamanho;

    cout << "Quantos números a mais você desejar armazenar ? ";
    cin >> novoTamanho;
    novoTamanho = novoTamanho + tamanho;

    cout << endl;

    int *numerosNovo = new int[novoTamanho];

    for (int i = 0; i < tamanho; i++) {
        numerosNovo[i] = numeros[i];
    }

    cout << "Digite " << novoTamanho - tamanho << " números: " << endl;
    for (int i = tamanho; i < novoTamanho; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> numerosNovo[i]; 
    }

    delete[] numeros;
    numeros = numerosNovo;
    tamanho = novoTamanho;

    cout << endl;

    cout << "Números digitados: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    delete[] numeros;
    numeros = nullptr;

    return 0;
}