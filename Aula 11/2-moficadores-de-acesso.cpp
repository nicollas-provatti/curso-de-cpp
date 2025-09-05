#include <iostream>

using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    void setNome(string nome) {
        this->nome = nome;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos.\n"; 
    }
};

class Aluno : public Pessoa {
private:
    string curso;

public:
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

    Aluno aluno;

    aluno.setNome("Lucas");
    aluno.setIdade(20);
    aluno.setCurso("Engenharia de Software");

    aluno.apresentar();
    aluno.mostrarDados();

    return 0;
}