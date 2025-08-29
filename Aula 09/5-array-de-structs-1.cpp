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

  Aluno() {
    nome = "sem nome";
    idade = 0;
    nota = 0.0;
  }
};

int main() {

  Aluno turma[3] = {
    {"João", 20, 8.5},
    {"Maria", 22, 9.0},
    {"Pedro", 21, 7.5},
  };

  float somaNotas = 0.0, mediaNotas;

  for (int i = 0; i < 3; i++) {
    somaNotas += turma[i].nota;
    turma[i].mostrarDados();
  }

  mediaNotas = somaNotas / 3.0;

  cout << "Média: " << mediaNotas << endl;

  return 0;
}