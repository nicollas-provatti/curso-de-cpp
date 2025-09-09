#include <iostream>

using namespace std;

int main() {
    
    int *ponteiro = new int;

    *ponteiro = 42;
    cout << "Valor: " << *ponteiro << endl;

    delete p;
    p = nullptr;

    return 0;
}