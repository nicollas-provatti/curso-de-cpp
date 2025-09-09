#include <iostream>

using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};

    cout << "array (valor): " << array << endl;
    cout << "     array[0]: " << *array << endl << endl;
    
    cout << "array (valor 1): " << array << endl;
    cout << "array (valor 2): " << array + 1 << endl;
    cout << "array (valor 2): " << array + 2 << endl;
    cout << "array (valor 2): " << array + 3 << endl << endl;

    cout << "array[0]: " << *(array + 0) << endl;
    cout << "array[1]: " << *(array + 1) << endl;
    cout << "array[2]: " << *(array + 2) << endl;
    cout << "array[3]: " << *(array + 3) << endl;

    return 0;
}