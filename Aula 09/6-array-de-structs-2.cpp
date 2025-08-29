#include <iostream>
#include <string>

using namespace std;

struct Aluno {
  string nome;
  int idade;
  float nota;

  Aluno() {
    nome = "sem nome";
    idade = 0;
    nota = 0.0;
  }

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

  Aluno turma[3];

  for (int i = 0; i < 3; i++) {
    cout << "Informe o nome: ";
    getline(cin, turma[i].nome);
    cout << "Informe a idade: ";
    cin >> turma[i].idade;
    cout << "Informe a nota: ";
    cin >> turma[i].nota;

    cin.ignore();
  }

  for (int i = 0; i < 3; i++) {
    turma[i].mostrarDados();
  }

  return 0;
}