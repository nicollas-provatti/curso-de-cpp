#include <iostream>
#include <string>

using namespace std;

struct Aluno {
  string nome;
  int idade;
  float nota;

  Aluno(string nome, int idade, float nota) {
    this->nome = nome;
    this->idade = idade;
    this->nota = nota;
  }

  void mostrarDados() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota: " << nota << endl;
  }

  bool aprovado() {
    return nota >= 7.0;
  }
};

int main() {

  Aluno aluno1("João", 20, 9.5);

  aluno1.mostrarDados();

  if (aluno1.aprovado()) {
    cout << "Aluno aprovado!" << endl;
  } else {
    cout << "Aluno reprovado!" << endl;
  }

  return 0;
}