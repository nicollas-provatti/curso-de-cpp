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

void atualizarNota(Aluno aluno, float novaNota) { 
  aluno.nota = novaNota;
  cout << "Nota: " << aluno.nota << endl;  
}

int main() {

  Aluno aluno("Carlos", 20, 7.8);

  atualizarNota(aluno, 8.0);

  cout << "Nota: " << aluno.nota << endl;
  
  return 0;
}