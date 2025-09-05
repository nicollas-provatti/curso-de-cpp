#include <iostream>
using namespace std;

// Classe base
class Aluno {
protected:
    string nome;
    int idade;

public:
    Aluno(string n, int i) : nome(n), idade(i) {}

    // Método a ser polimórfico
    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos." << endl;
    }
};

// Classe derivada 1
class AlunoGraduacao : public Aluno {
private:
    string curso;

public:
    AlunoGraduacao(string n, int i, string c) : Aluno(n, i), curso(c) {}

    void apresentar() {
        cout << "Olá, meu nome é " << nome << ", tenho " << idade
             << " anos e curso " << curso << " na graduação." << endl;
    }
};

// Classe derivada 2
class AlunoPosGraduacao : public Aluno {
private:
    string programa;

public:
    AlunoPosGraduacao(string n, int i, string p) : Aluno(n, i), programa(p) {}

    void apresentar() {
        cout << "Olá, meu nome é " << nome << ", tenho " << idade
             << " anos e participo do programa de " << programa << "." << endl;
    }
};

int main() {
    Aluno a("Lucas", 21);
    AlunoGraduacao ag("Maria", 23, "Engenharia de Software");
    AlunoPosGraduacao ap("Pedro", 30, "Inteligência Artificial");

    a.apresentar();   // comportamento da classe base
    ag.apresentar();  // comportamento específico da graduação
    ap.apresentar();  // comportamento específico da pós-graduação

    return 0;
}
