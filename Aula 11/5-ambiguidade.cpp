#include <iostream>

using namespace std;

class Pessoa {
public:
    string nome;

    void mostrarNome() {
        cout << "Nome da Pessoa: " << nome << endl;
    }
};

class Esporte {
public:
    string nome;

    void mostrarNome() {
        cout << "Nome do Esporte: " << nome << endl;
    }
};

class Aluno : public Pessoa, public Esporte {
public:
    void mostrarDados() {
        cout << "Atributos:\n";
        cout << "Nome da Pessoa: " << Pessoa::nome << endl;
        cout << "Nome do Esporte: " << Esporte::nome << endl << endl;

        cout << "Métodos:\n";
        Pessoa::mostrarNome();
        Esporte::mostrarNome();
    }
};

int main() {

    Aluno aluno;

    aluno.Pessoa::nome = "Lucas";
    aluno.Esporte::nome = "Futebol";

    aluno.mostrarDados();

    return 0;
}