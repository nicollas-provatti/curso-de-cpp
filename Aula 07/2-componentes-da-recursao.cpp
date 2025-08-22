#include <iostream>

using namespace std;

void contagem(int contador) {
    if (contador > 100) { // Caso base
        cout << "Fim da contagem" << endl;
        return;
    }

    cout << contador << endl;
    contagem(contador + 1); // Passo recursivo
    // Instrução
}

int main() {
    contagem(1);
    return 0;
}
