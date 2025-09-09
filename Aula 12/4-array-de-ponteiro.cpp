#include <iostream>

using namespace std;

int main() {
    
    int n1 = 10, n2 = 20, n3 = 30;

    int *array[3];

    array[0] = &n1;
    array[1] = &n2;
    array[2] = &n3;

    cout << "array[0] (endereço): " << array[0] << endl;
    cout << "array[1] (endereço): " << array[1] << endl;
    cout << "array[2] (endereço): " << array[2] << endl << endl;

    cout << "array[0] (valor): " << *array[0] << endl;
    cout << "array[1] (valor): " << *array[1] << endl;
    cout << "array[2] (valor): " << *array[2] << endl << endl;

    return 0;
}