#include <iostream>
#include <string>  // Necessária para usar string
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    // Saída de dados (mensagem para o usuário)
    cout << "Digite seu nome: ";
    getline(cin, nome);  // Lê a linha inteira (inclusive espaços)

    cout << "Digite sua idade: ";
    cin >> idade;  // Lê um número inteiro

    cout << "Digite sua altura (em metros): ";
    cin >> altura;  // Lê um número real

    // Exibindo os dados inseridos
    cout << "\n--- DADOS INSERIDOS ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}
