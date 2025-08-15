#include <iostream>

using namespace std;

int n1 = 5; // variável global

void rotina(int n2) {
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
}

int main() {
    int n2 = 10; // variável local
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    rotina(n2);

    return 0;
}
