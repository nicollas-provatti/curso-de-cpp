#include <iostream>

using namespace std;

class Aluno {
public:
    string nome;
    int idade;

    void mostrarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl << endl;
    }
};

int main() {
    
    Aluno aluno;

    aluno.nome = "Lucas";
    aluno.idade = 20;

    Aluno *ponteiro = &aluno;

    ponteiro->mostrarDados();

    (*ponteiro).mostrarDados();
    
    cout << "Nome: " << ponteiro->nome << endl;
    cout << "Idade: " << ponteiro->idade;

    return 0;
}