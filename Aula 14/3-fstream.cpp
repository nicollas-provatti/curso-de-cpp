#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  fstream arquivo;

  arquivo.open("dados.txt", ios::in | ios::out);

  // ios::trunc

  if (!arquivo.is_open()) {
    cout << "Erro ao abrir o arquivo!" << endl;
    return 1;
  }

  arquivo << "C++ é incrível!\n";
  arquivo << "Aprendendo fstream para ler e escrever.\n";
  arquivo << "Linha final do arquivo.\n";

  arquivo.seekg(0);

  cout << "--- Conteúdo do arquivo ---\n";
  string linha;
  while (getline(arquivo, linha)) {
    cout << linha << endl;
  }

  arquivo.close();

  return 0;
}