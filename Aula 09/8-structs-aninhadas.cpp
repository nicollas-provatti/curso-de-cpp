#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

struct Data {
  int dia;
  int mes; 
  int ano;
};

struct Aluno {
  string nome;
  int idade;
  float nota;

  // int dia;
  // int mes; 
  // int ano;
  Data aniversario;

  void mostrarDados() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota: " << nota << endl;

    cout << "Aniversário: "
        << setfill('0') << setw(2) << aniversario.dia << "/"
        << setfill('0') << setw(2) << aniversario.mes << "/"
        << aniversario.ano << endl;
  }
};


int main() {

  Aluno aluno = {"Lucas", 20, 6.7, {16, 02, 2002}};

  aluno.mostrarDados();
  
  return 0;
}