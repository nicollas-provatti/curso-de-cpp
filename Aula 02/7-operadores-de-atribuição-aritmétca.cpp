#include <iostream>
using namespace std;

int main() {
    int x = 10;

    cout << "Valor inicial de x: " << x << endl;

    x += 5;  // x = x + 5
    cout << "Depois de x += 5: " << x << endl;

    x -= 3;  // x = x - 3
    cout << "Depois de x -= 3: " << x << endl;

    x *= 2;  // x = x * 2
    cout << "Depois de x *= 2: " << x << endl;

    x /= 4;  // x = x / 4
    cout << "Depois de x /= 4: " << x << endl;

    x %= 3;  // x = x % 3
    cout << "Depois de x %= 3: " << x << endl;

    return 0;
}
