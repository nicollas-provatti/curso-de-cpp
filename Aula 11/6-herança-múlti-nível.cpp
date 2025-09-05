#include <iostream>
using namespace std;

// Classe base
class Pessoa {
protected:
    string nome;
    int idade;

public:
    Pessoa(string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    }

    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos.\n";
    }
};

// Classe derivada de Pessoa
class Aluno : public Pessoa {
protected:
    string curso;

public:
    Aluno(string nome, int idade, string curso) : Pessoa(nome, idade) {
        this->curso = curso;
    }

    void mostrarCurso() {
        cout << "Curso: " << curso << endl;
    }
};

// Classe derivada de Aluno (herança multi-nível)
class AlunoBolsa : public Aluno {
private:
    float valor;

public:
    AlunoBolsa(string nome, int idade, string curso, float valor)
        : Aluno(nome, idade, curso) {
            this->valor = valor;
        }

    void mostrarBolsa() {
        cout << "Valor da bolsa: R$ " << valor << endl;
    }
};

int main() {
    AlunoBolsa aluno("Lucas", 21, "Engenharia de Software", 1200.0);

    aluno.apresentar();      // método herdado de Pessoa
    aluno.mostrarCurso();    // método herdado de Aluno
    aluno.mostrarBolsa();    // método da própria classe AlunoBolsa

    return 0;
}
