#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  fstream arquivo;


  arquivo.open("texto.txt", ios::out | ios::trunc);
  if (!arquivo.is_open()) {
    cout << "Erro ao abrir arquivo para escrita!" << endl;
    return 1;
  }

  arquivo << "Aprender C++ é divertido\n";
  arquivo << "Manipulando arquivos com fstream\n";
  arquivo << "Linha final!" << endl;

  arquivo.close();

  arquivo.open("texto.txt", ios::in);
  if (!arquivo.is_open()) {
    cout << "Erro ao abrir arquivo para leitura!" << endl;
    return 1;
  }

  cout << "--- Leitura por linha (getline) ---" << endl;
  string linha;
  while (getline(arquivo, linha)) {
    cout << linha << endl;
  }

  arquivo.clear();
  arquivo.seekg(0);

  cout << "\n--- Leitura por palavra (>>) ---" << endl;
  string palavra;
  while (arquivo >> palavra) {
    cout << palavra << endl;
  }

  arquivo.clear();
  arquivo.seekg(0);

  cout << "\n--- Leitura por caractere (get) ---" << endl;
  char c;
  while (arquivo.get(c)) {
    cout << c;
  }

  arquivo.close();
  return 0;
}
