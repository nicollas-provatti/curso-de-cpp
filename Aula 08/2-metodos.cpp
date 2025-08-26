#include <iostream>
#include <string>

using namespace std;

int main() {
  // Acesso
  string palavra = "programacao";
  cout << palavra[0] << endl; // -1 ou 14
  cout << palavra.at(0) << endl;

  // Concatenação
  string nome = "Nicollas";
  string sobrenome = "Provatti";
  string nomeCompleto = nome + sobrenome;
  string nomeCompleto = nome + " " + sobrenome;

  // Tamanho
  string frase = "A programação é incrível";
  cout << frase.length() << endl;
  cout << frase.size() << endl;

  // Busca
  string texto = "Ola, pessoal! Tudo bem ?";
  size_t pos = texto.find("T");
  if (pos != string::npos) {
    cout << "Encontrado na posição " << pos;
  }

  // Laço de Repetição
  for (int i = 0; i < texto.length(); i ++) {
    if (texto.at(i) == 'T') {
      cout << "Encontrado na posição " << i;
    }
  }

  return 0;
}