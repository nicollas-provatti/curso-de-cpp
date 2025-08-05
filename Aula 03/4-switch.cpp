#include <iostream>
using namespace std;

int main() {
    int opcao; 

    cout << "Escolha uma opção (1-3): ";
    cin >> opcao; 

    switch (opcao) {
        case 1:
            cout << "Você escolheu a opção 1.\n";
            break;  
        case 2:
            cout << "Você escolheu a opção 2.\n";
            break;
        case 3:
            cout << "Você escolheu a opção 3.\n";
            break;
        default:
            cout << "Opção inválida.\n";  
    }

    return 0;  
}
