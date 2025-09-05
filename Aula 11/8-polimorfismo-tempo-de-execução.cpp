#include <iostream>
using namespace std;

class Aluno {
protected:
    string nome;
    int idade;

public:
    Aluno(string n, int i) : nome(n), idade(i) {}
    virtual void apresentar() {  // 
        cout << "Aluno: " << nome << ", " << idade << " anos (classe base)" << endl;
    }
};

class AlunoGraduacao : public Aluno {
private:
    string curso;

public:
    AlunoGraduacao(string n, int i, string c) : Aluno(n, i), curso(c) {}
    void apresentar() override {  
        cout << "Aluno: " << nome << ", " << idade << " anos, curso: " << curso << " (graduação)" << endl;
    }
};

int main() {
    Aluno* turma[2];
    turma[0] = new Aluno("Lucas", 21);
    turma[1] = new AlunoGraduacao("Maria", 23, "Engenharia de Software");

    for (int i = 0; i < 2; i++) {
        turma[i]->apresentar(); 
    }

    return 0;
}

/*  
#include <iostream>
using namespace std;

class Aluno {
protected:
    string nome;
    int idade;

public:
    Aluno(string n, int i) : nome(n), idade(i) {}
    void apresentar() {
        cout << "Aluno: " << nome << ", " << idade << " anos (classe base)" << endl;
    }
};

class AlunoGraduacao : public Aluno {
private:
    string curso;

public:
    AlunoGraduacao(string n, int i, string c) : Aluno(n, i), curso(c) {}
    void apresentar() {
        cout << "Aluno: " << nome << ", " << idade << " anos, curso: " << curso << " (graduação)" << endl;
    }
};

int main() {
    Aluno* turma[2];
    turma[0] = new Aluno("Lucas", 21);
    turma[1] = new AlunoGraduacao("Maria", 23, "Engenharia de Software");

    for (int i = 0; i < 2; i++) {
        turma[i]->apresentar(); 
    }

    for (int i = 0; i < 2; i++) delete turma[i];
    return 0;
}
*/

