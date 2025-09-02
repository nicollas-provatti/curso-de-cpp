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
    cout << "Nota: " << getNota() << endl;
  }

  bool aprovado() {
    return getNota() >= 7;
  }
};

int main() {
  int qtdAlunos;
  Aluno turma[50];

  cout << "Informe a quantidade de alunos (máx 50): ";
  cin >> qtdAlunos;

  if (qtdAlunos > 50) {
    // return 1;
    cout << "A quantidade de alunos foi definida para o valor máximo (50)" << endl;
    qtdAlunos = 50;
  }
  cin.ignore();
  cout << endl;

  for (int i = 0; i < qtdAlunos; i++) {
    cout << "--- Dados do " << i+1 << "º aluno ---" << endl;

    string nome;
    cout << "Informe o nome: ";
    getline(cin, nome);
    turma[i].setNome(nome);

    int idade;
    cout << "Informe a idade: ";
    cin >> idade;
    turma[i].setIdade(idade);

    float nota;
    cout << "Informe a nota: ";
    cin >> nota;
    turma[i].setNota(nota);

    cin.ignore();
    cout << endl;
  }

  for (int i = 0; i < qtdAlunos; i++) {
    cout << "--- Dados do " << i+1 << "º aluno ---" << endl;
    turma[i].mostrarDados();
    cout << "-------------------------" << endl;
  }

  return 0;
}