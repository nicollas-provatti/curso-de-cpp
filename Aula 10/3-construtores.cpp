#include <iostream>

using namespace std;

class Aluno {
private:
  string nome;
  int idade;
  float nota;

public:
  // Construtor Padrão
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

  void setNome(string n) {
    nome = n;
  }

  string getNome() {
    return nome;
  }

  void setIdade(int i) { 
    if (i < 0 || i > 20) {
      cout << "Idade Inválida!" << endl;
      idade = 0;
    } else {
      idade = i;
    }
  }

  int getIdade() {
    return idade;
  }

  void setNota(float nota) {
    if (nota < 0 || nota > 10) {
      cout << "Nota Inválida!" << endl;
      this->nota = 0.0;
    } else {
      this->nota = nota;
    }
  }

  float getNota() {
    return nota;
  }
};

int main() {
  Aluno aluno("Pedro", 20, 8.7);

  cout << "Nome: " << aluno.getNome() << endl;
  cout << "Idade: " << aluno.getIdade() << endl;
  cout << "Nota: " << aluno.getNota() << endl;

  Aluno aluno2;

  cout << "Nome: " << aluno2.getNome() << endl;
  cout << "Idade: " << aluno2.getIdade() << endl;
  cout << "Nota: " << aluno2.getNota() << endl;

  return 0;
}