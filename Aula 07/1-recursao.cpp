#include <iostream>

using namespace std;

void recursiva() {
    cout << "Olá, mundo!" << endl;
    recursiva(); // recursão infinita (use com cuidado)
}

void contagem(int contador) {
    cout << contador << endl;
    contagem(contador + 1); // também recursão infinita
}

int main() {
    // recursiva();
    // contagem(0);
    return 0;
}
