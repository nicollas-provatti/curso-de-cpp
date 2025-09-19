#include <iostream>
#include <fstream>   
#include <string>
using namespace std;

int main() {
  ofstream arquivo("alunos.txt");

  if (!arquivo.is_open()) {
    cout << "Erro ao abrir o arquivo!" << endl;
  }

  arquivo << "Lista de Alunos\n";
  arquivo << "----------------\n";

  string nome;
  int idade;

  for (int i = 0; i < 3; i++) {

    cout << "Digite o nome do aluno: ";
    getline(cin, nome);

    cout << "Digite a idade do aluno: ";
    cin >> idade;
    cin.ignore();

    arquivo << "Nome: " << nome << ", Idade: " << idade << "\n";
  }

  arquivo.close();

  cout << "\nDados salvos em 'alunos.txt' com sucesso!" << endl;

  return 0;
}