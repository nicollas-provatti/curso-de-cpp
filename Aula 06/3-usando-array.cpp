#include <iostream>

using namespace std;

int main() {
    // 1 Parte 
    int qtdNotas, acimaMedia = 0;
    float media;

    cout << "Informe a media: ";
    cin >> media;

    cout << "Informe a quantidade de notas: ";
    cin >> qtdNotas;

    for (int i  = 0; i < qtdNotas; i++) {
        float nota;
        cout << "Informe a nota: ";
        cin >> nota;

        if (nota >= media) {
            acimaMedia++;
        }
    }

    cout << "Quantidade de notas acima de media: " << acimaMedia << endl;

    // 2 Parte
    float notas[100];

    cout << "Informe a quantidade de notas: ";
    cin >> qtdNotas;

    for (int i  = 0; i < qtdNotas; i++) {
        float nota;
        cout << "Informe a nota: ";
        cin >> nota;

        notas[i] = nota;
    }

    cout << "Informe a media: ";
    cin >> media;

    for (int i  = 0; i < qtdNotas; i++) {
        if (notas[i] >= media) {
            acimaMedia++;
        }
    }

    cout << "Quantidade de notas acima de media: " << acimaMedia << endl;
}