#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    cout << "\nResultados das comparações:" << endl;
    cout << "a == b ? " << (a == b) << endl;
    cout << "a != b ? " << (a != b) << endl;
    cout << "a > b  ? " << (a > b) << endl;
    cout << "a < b  ? " << (a < b) << endl;
    cout << "a >= b ? " << (a >= b) << endl;
    cout << "a <= b ? " << (a <= b) << endl;

    return 0;
}
