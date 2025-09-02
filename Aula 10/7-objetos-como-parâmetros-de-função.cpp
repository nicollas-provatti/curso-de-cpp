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

  void mostrarDados() {
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Nota: " << getNota() << endl << endl;
  }

  bool aprovado() {
    return getNota() >= 7;
  }
};

void mostrarNota(Aluno aluno) {
  cout << "Sua nota é " << aluno.getNota() << endl;
}

void atualizarNota(Aluno aluno, float novaNota) {
  aluno.setNota(novaNota);
  cout << "Sua nota é " << aluno.getNota() << endl;
}

int main() {
  
  Aluno aluno("Pedro", 20, 8.5);

  mostrarNota(aluno);
  atualizarNota(aluno, 9.0);
  mostrarNota(aluno);

  return 0;
}