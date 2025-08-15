#include <iostream>

using namespace std;

int main()
{
  float nota1, nota2, media;
  string nome, situacao = "";

  cout << "Digite seu nome: ";
  getline(cin, nome);

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  media = (nota1 + nota2) / 2.0;

  if (media >= 7)
  {
    situacao = "Aprovado";
  }
  else if (media >= 4 && media < 7)
  {
    situacao = "Recuperacao";
  }
  else if (media >= 0 && media < 4)
  {
    situacao = "Reprovado";
  }

  cout << "Dados do Aluno\n";
  cout << "Nome: " << nome << endl;
  cout << "Nota 1: " << nota1 << endl;
  cout << "Nota 2: " << nota2 << endl;
  cout << "Media: " << media << endl;
  cout << "Situacao: " << situacao << endl;

  return 0;
}