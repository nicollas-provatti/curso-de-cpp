#include <iostream>

using namespace std;

class Aluno {
private:
  string nome;
  int idade;
  float nota;

public:
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
  Aluno aluno;

  aluno.setNome("Pedro");
  aluno.setIdade(20);
  aluno.setNota(8.7);

  cout << "Nome: " << aluno.getNome() << endl;
  cout << "Idade: " << aluno.getIdade() << endl;
  cout << "Nota: " << aluno.getNota() << endl;

  return 0;
}