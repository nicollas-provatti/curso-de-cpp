#include <iostream>
#include <string>

using namespace std;

struct Aluno {
  string nome;
  int idade;
  float nota;

  // this
  Aluno(string nome, int idade, float nota) {
    this->nome = nome;
    this->idade = idade;
    this->nota = nota;
  }
};

int main() {

  Aluno aluno1("João", 20, 9.5);

  cout << "Nome: " << aluno1.nome << endl;
  cout << "Idade: " << aluno1.idade << endl;
  cout << "Nota: " << aluno1.nota << endl;


  return 0;
}