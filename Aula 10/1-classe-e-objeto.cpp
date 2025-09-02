#include <iostream>

using namespace std;

class Aluno {
public:
  string nome;
  int idade;
  float nota;
};

int main() {
  Aluno aluno = {"Marcos", 22, 7.6};

  aluno.nome = "Pedro";

  cout << "Nome: " << aluno.nome << endl;
  cout << "Idade: " << aluno.idade << endl;
  cout << "Nota: " << aluno.nota << endl;

  return 0;
}