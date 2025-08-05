#include <iostream>
using namespace std;

// Voto Obrigatório [18, 65)
// Voto facultativo [16, 18)
// Não pode votar [0, 16)

int main() {
    int idade; 

    cout << "Digite sua idade: ";  
    cin >> idade;

    // 1 Parte
    if (idade >= 18) {
        // Voto Obrigatório
    }

    if (idade < 18) {
        // Não pode votar
    }
    
    // 2 Parte
    if (idade >= 18) { 
        cout << "Voto Obrigatorio.\n";  
    } else {
        cout << "Nao pode votar.\n"; 
    }

    // 3 Parte
    if (idade >= 65) {
        cout << "Voto Facultativo.\n";
    }
    if (idade >= 18) { 
        cout << "Voto Obrigatorio.\n";  
    } else {
        cout << "Nao pode votar.\n"; 
    }

    return 0;  
}
