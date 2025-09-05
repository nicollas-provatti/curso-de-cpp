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

    Pessoa() { cout << "Me chamou!\n"; }

    // Encapsulamento
    void setNome(string nome) {
        this->nome = nome;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    // Métodos
    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos.\n"; 
    }
};

class Aluno : public Pessoa {
private:
    string curso;

public:
    // Construtor
    Aluno(string nome, int idade, string curso) : Pessoa(nome, idade) {
        // this->nome = nome;
        // this->idade = idade;
        this->curso = curso;
    }

    void setCurso(string curso) {
        this->curso = curso;
    }

    void mostrarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {

    Aluno aluno("Lucas", 20, "Engenharia de Software");

    aluno.apresentar();
    aluno.mostrarDados();

    return 0;
}