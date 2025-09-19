#include <iostream>
#include <fstream>   
#include <string>
using namespace std;

int main() {
  ifstream arquivo("alunos.txt");

  if (!arquivo.is_open()) {
    cout << "Erro ao abrir o arquivo!" << endl;
    return 1;
  }

  string linha;

  cout << "--- Conteúdo do arquivo ---\n\n";

  while (getline(arquivo, linha)) {
    cout << linha << endl;
  }

  arquivo.close(); 

  return 0;
}