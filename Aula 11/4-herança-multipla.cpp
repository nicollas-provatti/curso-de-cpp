#include <iostream>

using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    // Construtor
    Pessoa(string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    }

    // Métodos
    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos.\n"; 
    }
};

class Esporte {
protected:
    string modalidade;

public:
    // Construtor
    Esporte(string modalidade) {
        this->modalidade = modalidade;
    }

    Esporte() { cout << "Me chamou!\n"; }

    // Métodos
    void mostrarEsporte() {
        cout << "Modalidade esportiva: " << modalidade << endl;
    }
};

class Aluno : public Pessoa, public Esporte {
private:
    string curso;

public:
    // Construtor
    Aluno(string nome, int idade, string curso, string modalidade) 
        : Pessoa(nome, idade), Esporte(modalidade) {
        this->curso = curso;
    }

    void mostrarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {

    Aluno aluno("Lucas", 20, "Engenharia de Software", "Futebol");

    aluno.apresentar();
    aluno.mostrarDados();
    aluno.mostrarEsporte();

    return 0;
}