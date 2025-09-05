#include <iostream>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos.\n"; 
    }
};

class Aluno : public Pessoa {
public:
    string curso;

    void mostrarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {

    Aluno aluno;

    aluno.nome = "Lucas";
    aluno.idade = 20;
    aluno.curso = "Engenharia de Software";

    aluno.apresentar();
    aluno.mostrarDados();

    return 0;
}