#include <iostream>
#include <string>

using namespace std;

// Mesmo nome da struct
// Sem tipo de retorno
// Chamada automática
// Sobrecarga é possível

struct Aluno {
  string nome;
  int idade;
  float nota;


  Aluno(string n, int i, float nt) {
    nome = n;
    idade = i;
    nota = nt;
  }
  
  // Construtor Padrão
  Aluno() {
    nome = "sem nome";
    idade = 0;
    nota = 0.0;
  }
};

int main() {

  Aluno aluno1("João", 20, 9.5);

  cout << "Nome: " << aluno1.nome << endl;
  cout << "Idade: " << aluno1.idade << endl;
  cout << "Nota: " << aluno1.nota << endl;

  Aluno aluno2;

  cout << "Nome: " << aluno1.nome << endl;
  cout << "Idade: " << aluno1.idade << endl;
  cout << "Nota: " << aluno1.nota << endl;

  return 0;
}