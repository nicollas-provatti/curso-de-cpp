#include <iostream>
#include <memory> 

using namespace std;

int main() {
    int tamanho;

    cout << "Quantos números você deseja armazenar? ";
    cin >> tamanho;

    // unique_ptr<int[]> numeros(new int[tamanho]);
    unique_ptr<int[]> vetor = make_unique<int[]>(tamanho);

    cout << "Digite " << tamanho << " números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    cout << "Você digitou: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Não precisa do delete

    return 0;
}
