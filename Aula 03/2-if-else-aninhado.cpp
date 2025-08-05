#include <iostream>
using namespace std;

int main() {
    int idade; 

    cout << "Digite sua idade: ";
    cin >> idade; 

    // 1 Parte
    if ((idade >= 16 && idade < 18) || idade >= 65) {
        cout << "Voto Facultativo.\n" ;
    } else {
        if (idade >= 18) { 
            cout << "Voto Obrigatorio.\n" ;  
        } else {
            cout << "Nao pode votar.\n" ; 
        }
    }

    // 2 Parte
    if (idade < 0 || idade > 120) {
        cout << "Idade Invalida.\n" ;
    }

    if ((idade >= 16 && idade < 18) || idade >= 65) {
        cout << "Voto Facultativo.\n" ;
    } else {
        if (idade >= 18) { 
            cout << "Voto Obrigatorio.\n" ;  
        } else {
            cout << "Nao pode votar.\n" ; 
        }
    }

    // 3 Parte
    if (idade < 0 || idade > 120) {
        cout << "Idade Invalida.\n";
    } else {
        if ((idade >= 16 && idade < 18) || idade >= 65) {
            cout << "Voto Facultativo.\n";
        } else {
            if (idade >= 18) { 
                cout << "Voto Obrigatorio.\n";  
            } else {
                cout << "Nao pode votar.\n"; 
            }
        }
    }

    return 0;  
}
