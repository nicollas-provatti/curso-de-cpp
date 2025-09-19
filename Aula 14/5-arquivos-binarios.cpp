#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int numeros[5] = {10, 20, 30, 40, 50};

  // --- Escrita em arquivo binário ---
  ofstream arquivoOut("dados.bin", ios::binary);
  if (!arquivoOut) {
    cerr << "Erro ao abrir arquivo para escrita.\n";
    return 1;
  }

  // grava todos os números do array no arquivo
  arquivoOut.write(reinterpret_cast<char*>(numeros), sizeof(numeros));
  arquivoOut.close();

  // --- Leitura do arquivo binário ---
  ifstream arquivoIn("dados.bin", ios::binary);
  if (!arquivoIn) {
    cerr << "Erro ao abrir arquivo para leitura.\n";
    return 1;
  }

  int leitura[5]; // vetor para armazenar os dados lidos
  arquivoIn.read(reinterpret_cast<char*>(leitura), sizeof(leitura));
  arquivoIn.close();

  // Mostra os números lidos
  cout << "--- Números lidos do arquivo ---\n";
  for (int i = 0; i < 5; i++) {
    cout << leitura[i] << " ";
  }
  cout << endl;

  return 0;
}
